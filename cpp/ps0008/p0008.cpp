#include <iostream>
#include <limits>
#include <cctype>
#include <string>
using namespace std;
void decrypt(string msg, int key)
{
    for (char& c : msg) {
        if (isupper(c)) {    
            c = (c - 'A' - key + 26) % 26 + 'A';
        } else if (islower(c)) {
            c = (c - 'a' - key + 26) % 26 + 'a';
        }
    }
    cout << "Decrypted message: " << msg << endl;
}
int main()
{
    string ciphertext;  
    int key;            
    cout << "Enter the ciphertext: ";
    getline(cin, ciphertext);//عشان يقرا السطر كامل 
    cout << "Enter the key: ";
    while (!(cin >> key)) {
        cout << "Invalid input. Please enter an integer for the key: ";
        cin.clear();  //عشان امسح القيم الغير صحيحه
       cin.ignore(100, '\n'); 
    }
    decrypt(ciphertext, key);
    return 0;
}
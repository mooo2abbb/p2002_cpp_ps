#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Decrypting process 3/3
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
    // prompting user for valid ciphertext and key
    string ciphertext;  
    float key; // to validate floating-point numbers for key
    
    // Taking message 1/1
    cout << "Enter the ciphertext: ";
    getline(cin, ciphertext); //عشان يقرا السطر كامل 
    
    // checking key invalidity 2.5/3
    do
    {
        cout << "Enter the key: ";
        while (!(cin >> key)) {
            cout << "Invalid input. Please enter an integer for the key: ";
            cin.clear();  //عشان امسح القيم الغير صحيحه
            cin.ignore(100, '\n');
        }
    }
    while (key != (int)key);
    key = (int)key % 26; // removing useless multiples
    
    // invoke your decrypt function to return the plaintext 1/1
    decrypt(ciphertext, key);
    return 0;
}
// great work 😎 9/10 ⭐

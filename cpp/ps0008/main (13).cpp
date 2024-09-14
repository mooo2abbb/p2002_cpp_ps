#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int Decode (string msg , int key);

int main()
{
    // prompting user for valid ciphertext and key
    string message;
    int key;
    
    cout<<"enter your message \n";
    getline(cin , message); // taking message 1/1
    
    // Checks if key is valid 0.5/3
    string tmp_key;
    bool validkey = false;
    int key_len;
    while (!validkey) {
        
        cout << "key:";
        getline(cin , tmp_key);
        key_len = tmp_key.length();
        
        if (key_len==0 || (key_len==1 && (tmp_key[0]=='+' || tmp_key[0]=='-')))
            continue;
            
        validkey = true;
        int i = 0;
        for (char c : tmp_key) {
            if (i==0 && (c=='-' || c=='+'))
            {
                ++i;
                continue;
            }
            if (!isdigit(c)) {
                validkey = false;
                break;
            }
            ++i;
        }
    }
    key = stoi(tmp_key);
    
    // invoke your decrypt function to return the plaintext 1/1
    Decode(message , key);
}

// Decrypting process 2.5/3
int Decode (string msg , int key)
{
    key %= 26; // to remove multiples
    
    char character;
    
    for(int i=0; i<msg[i]; i++)
    {
        character = msg[i];
        
        if(character >= 'a' && character <= 'z')
        {
            character -=key;
            
            if(character > 'z')
                character = character-'z' + 'a'-1;
            if(character < 'a')
                character = 'z' - ('a' - character) + 1;
            
            msg[i] = character;
        }
        
        else if(character >= 'A' && character <= 'Z')
        {
            character -=key;
            
            if(character > 'Z')
                character = character-'Z' + 'A'-1;
            if(character < 'A')
                character = 'Z' - ('A' - character) + 1;
            
            msg[i] = character;
        }
    } // DRY!
    
    cout<<"msg = "<<msg<<"\n";
    
    return 0;
}
// good work 👍 6/10

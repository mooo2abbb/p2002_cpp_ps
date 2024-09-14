#include<iostream>
#include<cctype>
#include<string>

using namespace std;

void decrypt(string msg,int key);
bool isnum(string s);

int main()
{
    // prompting user for valid ciphertext and key
    string key;
    string msg;

    cout<<"key: ";
    cin>>key;
    
    bool p=isnum(key);
    while (p==false){
        cout <<"key: ";
        cin>>key;
        p=isnum(key);
    }
    int k=stoi(key);
    
    cin.ignore();
    cout<<"ciphertext: ";
    getline(cin,msg); // Taking message 1/1
    
    // invoke your decrypt function to return the plaintext 1/1
    decrypt(msg,k);

    return 0;
}

// Decrypting process 3/3
void decrypt(string msg,int key){
    string plaintext;
    key=key%26;
    
    for(char c:msg){
    
        if(isupper(c)){
            c=c-key;
            
            if(c<'A'){
                c+=26;
            }
            
            else if(c>'Z'){
                c-=26;
            }
            
            plaintext+=c;
            
        }
        
        else if(islower(c)){
            c=c-key;
            
            if(c<'a'){
                c+=26;
            }
            
            else if(c>'z'){
                c-=26;
            }
            
            plaintext+=c;
        }
        
        
        else {
            plaintext+=c;
        }
        
    } // DRY!

    cout<<"plaintext: "<<plaintext<<endl;
    
}

// checking key invalidity 3/3
bool isnum (string s){
    if(isdigit(s[0])||s[0]=='+'||s[0]=='-'){
        for(int i=1;i<s.length();i++){
            if(!isdigit(s[i]))
                return false;
        }
    }
    
    else{
        return false;
    }
    
    return true;
}
// great work 😎 9.5/10 ⭐

#include <iostream>
#include <limits>
#include <cctype>
#include <string>
using namespace std;

int Decode (string msg , int key);

int main()
{
    
string message ;
int key;

cout<<"enter your message \n";
getline(cin , message);


cout<<"enter your key \n";
cin >>key;

cout<<"message = "<<Decode(message , key)<<"\n";
}



int Decode (string msg , int key)
{

char character;

for(int i=0 ; i<msg[i]  ; i++) 
{
character = msg[i]; 
 
if(character >= 'a' && character <= 'z') 
{
character -=key;    
 
 
if(character > 'z') 

character = character-'z' + 'a'-1;    

msg[i] = character; 
} 
 
else if(character >= 'A' && character <= 'Z') 
{
character -=key;    
 
 
if(character > 'Z') 

character = character-'Z' + 'A'-1;      
 
msg[i] = character; 
} 
} 
 
cout<<" msg = "<<msg<<"\n";
 

return 0;
}

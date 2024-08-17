#include <iostream>
#include <limits>
#include <cctype>
#include <string>
using namespace std;

int main()
{
char character;    
string msg;
int  key;
 
cout<<"enter your msg"<<"\n"; 
getline(cin , msg ); 

cout<<"enter your key"<<"\n"; 
cin >>key; 
 
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



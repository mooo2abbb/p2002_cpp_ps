#include <iostream>
#include <limits>
#include <cctype>
#include <string>
using namespace std;

int main()
{
char ch;    
string msg;
int  key;
 
cout<<"enter your msg"<<"\n"; 
getline(cin , msg ); 

cout<<"enter your key"<<"\n"; 
cin >>key; 
 
for(int i=0 ; i<msg[i]  ; i++) 
{
ch = msg[i]; 
 
if(ch >= 'a' && ch <= 'z') 
{
ch -=key;    
 
 
if(ch > 'z') 

ch = ch-'z' + 'a'-1;    

msg[i] = ch; 
} 
 
else if(ch >= 'A' && ch <= 'Z') 
{
ch -=key;    
 
 
if(ch > 'Z') 

ch = ch-'Z' + 'A'-1;      
 
msg[i] = ch; 
} 
} 
 
cout<<" msg = "<<msg<<"\n";
 

return 0;
}



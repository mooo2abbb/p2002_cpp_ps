#include <iostream>
#include<limits>
#include<cctype>
#include<string>

using namespace std;
void  decrypt(string msg,int key);
int main()
{ int  key;
string msg;

cout <<"key: ";
cin>>key;

 cin.ignore();
cout<<"ciphertext: ";

getline(cin,msg);


decrypt(msg,key);
    return 0;
}
void decrypt(string msg,int key){
    string  plaintext;
    key=key%26;
 for(char c:msg){

  if(isupper(c)){
   c=c-key;
  if(c<'A'){
    c+=26;
  }else if(c>'Z'){
  c-=26;}

      plaintext+=c;

  }

    else if(islower(c)){
    c=c-key;
     if(c<'a'){
    c+=26;
  }else if(c>'z'){
  c-=26;}

  plaintext+=c;}


    else{

   plaintext+=c;}

 }

cout<<"plaintext: "<<plaintext<<endl;

}













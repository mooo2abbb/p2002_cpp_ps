#include <iostream>

using namespace std;

int main()
{
cout<<"--------------------------------------------" <<endl;
cout<<"Problem 0003"<< endl;

    int num1;
    cout << "enter a number of ASCII value \n";
    cin>> num1;

    if(num1>=32 &num1<=126 )
{
   cout <<"the character for  "<< num1 << " is "<<char (num1) << "\n";
}
else
{
    cout <<"Invalid character/s or zero value \n";
}
    return 0;
}

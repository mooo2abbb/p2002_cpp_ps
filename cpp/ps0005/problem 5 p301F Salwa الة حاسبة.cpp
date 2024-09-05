#include <iostream>

using namespace std;

int main()
{

    int num1;
    int num2;
    int op;


cout<<"enter the first number" << endl;
cin>> num1;

cout<<"enter the second number" << endl;
cin>> num2;

cout<<"choose the operator \n" "[1] + \n" "[2] - \n" "[3] * \n" "[4] / \n"<< endl;
cin>> op;

if(op == 1)
{
    cout <<"your result is  "<< num1+num2 << endl;
}

else if (op == 2)
{
    cout <<"your result is  "<< num1-num2 << endl;
}

else if(op == 3)
{
    cout <<"your result is  "<< num1*num2 << endl;
}

  else if(op == 4)
{
    cout <<"your result is  "<< num1/num2 << endl;
}

  else
{
    cout <<"this operator is not found " << endl;
}
    return 0;
}

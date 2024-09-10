#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 1/1.5
    float num;
    cout << "enter a number of ASCII value \n";
    cin >> num;
    int temp = num; // to compare with user input

    // checking invalidaty of user's input 2/4
	// printing the number and the opposite printable character 2/2
    if(num == 0)
    {
        cout << "Invalid character/s or zero value \n";
    }
    else if(num != temp)
    {
        cout << "Invalid: a floating point number! \n";
    }
    else if(num >= 32 && num <= 126)
    {
       cout << "the character for  " << num << " is " << char (num) << "\n";
    }
    else
    {
        cout << "Invalid: number is out of range! \n";
    }
    
    return 0;
}
// good work 👍 6/10

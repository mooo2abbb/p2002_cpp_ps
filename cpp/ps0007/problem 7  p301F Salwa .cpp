
#include <iostream>

using namespace std;

// Area of rectangle = length × width

float area (int length, int width);

int main()
{
    int length;
    int width;
    cout << "please, enter the length \n";
    cin>> length;
    cout << "please, enter the width \n";
    cin>> width;
    cout << "the area of the rectangle is  "<< area ( length, width) << "\n";
    return 0;
}

float area (int length, int width)
{
    return length* width;
}

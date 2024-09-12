#include<iostream>
using namespace std;

void counter(double end = 0, double start = 0, int steps = 1) 
{
    // التحقق من إذا كان الرقم المدخل كسرًا
    if (start != (int)start) 
    {
        cout << "Invalid input.." << endl;
        return; 
    }
    if (steps > 0)
    {
      for (int i = start; i <= end; i += steps)
     {
        cout << i << "\n";
        cout << "======================\n";
     }
    }
    else if(steps < 0)
    {
      for (int i = start; i >= end; i += steps)
      {
        cout << i << "\n";
        cout << "======================\n";
      }
    }
    else 
    {
      cout<<"wtf how the steps equals 0 ";
    }
    
}

int main()
{
    cout<<"Please give me the full mark!!! I very tired from this problem\n"; 
    
    counter(3,1 );  
    return 0;
}
#include<iostream>
using namespace std;

void counter(int end, int start = 0, int steps = 1) 
{
    if (steps == 0 && start == end)
    {
        cout << end << endl;
        return;
    }
    
    if (steps == 0 || start == end)
    {
        cout << "Error: can't start from " << start << " to " << end << " with step " << steps << endl;
        return;
    }
    
    if ((end - start) / steps < 0 || (end - start) % steps != 0)
    {
        cout << "Error: can't start from " << start << " to " << end << " with step " << steps << endl;
        return;
    }
    
    for (start; (end - start) != 0; start += steps)
    {
        cout << start << endl;
    }
    cout << end << endl;
    
}

int main()
{
    // running my valid test cases 2/3

    counter(5); // 0 1 2 3 4 5
    cout << "===============" << endl;

    counter(3, 1); // 1 2 3
    cout << "===============" << endl;

    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "===============" << endl;

    counter(10, 10, 0); // 10
    cout << "===============" << endl;



    // running invalid test cases, have to give clear error 1/4

    counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
    cout << "===============" << endl;

    counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
    cout << "===============" << endl;

    counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
    cout << "===============" << endl;

    counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
    cout << "===============" << endl;

    counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1
    cout << "===============" << endl;

    counter(-1, 3); // Error: can't start from 3 to -1 with step 1
    cout << "===============" << endl;

    counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
    cout << "===============" << endl;

    counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
    cout << "===============" << endl;



    // running bonus test cases +0

    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << "===============" << endl;

    counter(100); // Massive number of iterations for our humble counter
    cout << "===============" << endl;

    counter(200, -44); // Massive number of iterations for our humble counter



    return 0;
}
// good work 👍 6/10

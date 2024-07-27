# ps0006 - Special Counter

## Required
- To make for me a special decimal-based counter using function which I can pass it some parameters like end, start (default = `0`) & step (default = `1`) increasing or decreasing.
- Take in consideration all bugs & errors, try to fix as much as you can of them and exit the program outputting a clear error message.
- Feel free to chat with me as a client on [Whatsapp](https://wa.me/201553566100) or [Facebook Messanger](https://www.facebook.com/61560263336743/) if you want to ask me more about my requirements.
- Here are some test cases to help you
```cpp
#include <iostream>

void counter(int end, int start = 0, int step = 1);

int main(void)
{
    // running my valid test cases
    
    counter(5); // 0 1 2 3 4 5
    cout << "===============" << endl;
    
    counter(3, 1); // 1 2 3
    cout << "===============" << endl;
    
    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "===============" << endl;
    
    counter(10, 10, 0); // 10
    cout << "===============" << endl;
    
    
    
    // running invalid test cases, have to give clear error
    
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
    
    
    
    // running bonus test cases
    
    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << "===============" << endl;
    
    counter(100); // Massive number of iterations for our humble counter
    cout << "===============" << endl;
    
    counter(200, -44); // Massive number of iterations for our humble counter
    
    
    
    return 0;
}

void counter(int end, int start, int step){
    // write your code here
}
```

## Links
- you can find [here](./cpp_ps0006.cpp) the sarter code.
- [Document link](https://drive.google.com/file/d/1hvc-008yXYTjoF3UU7sbDEss6eQ2KC3p/view?usp=drive_link) for problem story (you can have fun while solving problems 😂)

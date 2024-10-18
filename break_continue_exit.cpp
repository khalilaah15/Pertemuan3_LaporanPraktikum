#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            cout << "Break at number: " << i << endl;
            break;
        }
        cout << "Number: " << i << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << "Continue at number: " << i << endl;
    }
    cout << "Before exit." << endl;
    exit(0);
    cout << "After exit." << endl;
}


#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << "While loop number: " << i << endl;
        i++;
    }
    i = 0;
    do
    {
        cout << "Do-while loop number: " << i << endl;
        i++;
    } while (i < 10);
}


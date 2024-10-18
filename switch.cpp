#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Well done!" << endl;
        break;
    case 'D':
        cout << "You passed!" << endl;
        break;
    case 'F':
        cout << "Better try again!" << endl;
        break;
    default:
        cout << "Invalid grade." << endl;
    }
}



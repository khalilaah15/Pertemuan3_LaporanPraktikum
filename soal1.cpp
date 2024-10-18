#include <iostream>
using namespace std;

int main()
{
    int n;

    while (true)
    {
        cout << "Masukkan bilangan bulat positif (masukkan angka negatif untuk berhenti): ";
        cin >> n;

        if (n < 0)
        {
            cout << "Program Selesai." << endl;
            break;
        }
        else
        {
            int faktorial = 1;
            for (int i = 1; i <= n; ++i)
            {
                faktorial *= i;
            }
            cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
        }
    }

    return 0;
}

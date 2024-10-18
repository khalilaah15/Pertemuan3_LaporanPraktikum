#include <iostream>

using namespace std;

int main()
{
    int check;
    do
    {
        bool invalidInput = false;
        double persentaseKehadiran = 0;
        string status;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            int hadir;
            cin >> hadir;
            if (hadir > 1 || hadir < 0)
            {
                cout << "Input yang Anda masukkan tidak valid." << endl;
                invalidInput = true;
                break;
            }
            persentaseKehadiran += hadir;
        }
        if (invalidInput == true)
            break;

        persentaseKehadiran = persentaseKehadiran / 5 * 100;

        if (persentaseKehadiran > 75)
        {
            status = "Baik";
        }
        else if (persentaseKehadiran >= 50)
        {
            status = "Cukup";
        }
        else
        {
            status = "Kurang";
        }

        cout << "Persentase Kehadiran: " << persentaseKehadiran << "%" << endl
             << "Status Kehadiran: " << status << endl;

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> check;
    } while (check == 1);
    return 0;
}
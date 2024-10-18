#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jumlahBarang;
    float harga, totalHarga = 0, diskon = 0;
    char pilihan;

    do
    {
        diskon = 0;
        totalHarga = 0;

        while (true)
        {
            cout << "Masukkan jumlah barang: ";
            cin >> jumlahBarang;
            if (jumlahBarang >= 0)
            {
                break;
            }
            else
            {
                cout << "Input tidak valid. Silakan masukkan angka yang tidak negatif.\n";
            }
        }
        for (int i = 1; i <= jumlahBarang; ++i)
        {
            cout << "Masukkan harga barang ke-" << i << ": ";
            cin >> harga;
            totalHarga += harga;
        }

        if (totalHarga > 500000)
        {
            diskon = 0.10;
        }
        else if (totalHarga >= 250000)
        {
            diskon = 0.05;
        }
        else
        {
            diskon = 0;
        }

        float jumlahDiskon = totalHarga * diskon;
        float totalSetelahDiskon = totalHarga - jumlahDiskon;
        cout << fixed << setprecision(2);
        cout << "Total harga sebelum diskon: Rp" << totalHarga << endl;
        cout << "Diskon: Rp" << jumlahDiskon << endl;
        cout << "Total harga setelah diskon: Rp" << totalSetelahDiskon << endl;
        cout << "\nIngin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;

    } while (pilihan == '1');

    cout << "Program selesai. Terima kasih!\n";
    return 0;
}

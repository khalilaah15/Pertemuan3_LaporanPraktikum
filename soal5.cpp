#include <iostream>
using namespace std;

int main()
{
    int jumlahMataPelajaran;
    float nilai, totalNilai = 0, rataRata;
    char pilihan;
    do
    {
        totalNilai = 0;

        while (true)
        {
            cout << "Masukkan jumlah mata pelajaran: ";
            cin >> jumlahMataPelajaran;
            if (jumlahMataPelajaran >= 0)
            {
                break;
            }
        }
        for (int i = 1; i <= jumlahMataPelajaran; ++i)
        {
            cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
            cin >> nilai;
            totalNilai += nilai;
        }
        rataRata = totalNilai / jumlahMataPelajaran;
        string kategoriPrestasi;
        if (rataRata > 85)
        {
            kategoriPrestasi = "Sangat Baik";
        }
        else if (rataRata >= 70)
        {
            kategoriPrestasi = "Baik";
        }
        else if (rataRata >= 50)
        {
            kategoriPrestasi = "Cukup";
        }
        else
        {
            kategoriPrestasi = "Perlu Peningkatan";
        }
        cout << "Rata-rata nilai: " << rataRata << endl;
        cout << "Kategori prestasi: " << kategoriPrestasi << endl;
        cout << "\nIngin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;
    } while (pilihan == '1');
    cout << "Program selesai. Terima kasih!\n";
    return 0;
}

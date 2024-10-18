#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    for (int check = 1; check == 1;)
    {
        string kategoriTerbesar;
        double totalPengeluaran = 0, totalPengeluaranMakanan = 0,
               totalPengeluaranTransportasi = 0, totalPengeluaranHiburan = 0,
               totalPengeluaranLainnya = 0, pengeluaranTerbesar = 0;

        for (int hariKe = 1; hariKe <= 7; hariKe++)
        {
            double pengeluaran;
            string kategori;

            cout << "Masukkan kategori pengeluaran hari ke-" << hariKe
                 << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> kategori;
            cout << "Masukkan jumlah pengeluaran: Rp ";

            if (kategori == "Makanan")
            {
                cin >> pengeluaran;
                totalPengeluaranMakanan += pengeluaran;
                totalPengeluaran += pengeluaran;
                if (pengeluaranTerbesar < pengeluaran)
                {
                    pengeluaranTerbesar = pengeluaran;
                    kategoriTerbesar = "Makanan";
                }
            }
            else if (kategori == "Transportasi")
            {
                cin >> pengeluaran;
                totalPengeluaranTransportasi += pengeluaran;
                totalPengeluaran += pengeluaran;

                if (pengeluaranTerbesar < pengeluaran)
                {
                    pengeluaranTerbesar = pengeluaran;
                    kategoriTerbesar = "Transportasi";
                }
            }
            else if (kategori == "Hiburan")
            {
                cin >> pengeluaran;
                totalPengeluaranHiburan += pengeluaran;
                totalPengeluaran += pengeluaran;
                if (pengeluaranTerbesar < pengeluaran)
                {
                    pengeluaranTerbesar = pengeluaran;
                    kategoriTerbesar = "Hiburan";
                }
            }
            else
            {
                cin >> pengeluaran;
                totalPengeluaranLainnya += pengeluaran;
                totalPengeluaran += pengeluaran;
                if (pengeluaranTerbesar < pengeluaran)
                {
                    pengeluaranTerbesar = pengeluaran;
                    kategoriTerbesar = "Lainnya";
                }
            }
        }
        cout << fixed << setprecision(2) << "Total Pengeluaran Makanan: Rp "
             << totalPengeluaranMakanan << endl
             << "Total Pengeluaran Transportasi: Rp "
             << totalPengeluaranTransportasi << endl
             << "Total Pengeluaran Hiburan: Rp " << totalPengeluaranHiburan << endl
             << "Total Pengeluaran Lainnya: Rp " << totalPengeluaranLainnya << endl
             << "Total Pengeluaran Selama Seminggu: Rp " << totalPengeluaran << endl
             << "Pengeluaran Terbesar: Rp " << pengeluaranTerbesar
             << " pada kategori " << kategoriTerbesar << endl;

        cout << "Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain "
                "itu tidak): ";
        cin >> check;
    }
    return 0;
}
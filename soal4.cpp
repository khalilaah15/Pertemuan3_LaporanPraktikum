#include <iostream>
using namespace std;

int main() {
    float kWh, totalTagihan = 0, diskon = 0;

    cout << "Masukkan penggunaan listrik (kWh) selama sebulan: ";
    cin >> kWh;

    if (kWh <= 100) {
        totalTagihan = kWh * 1500;
    } else if (kWh <= 300) {
        totalTagihan = 100 * 1500 + (kWh - 100) * 2000;
    } else {
        totalTagihan = 100 * 1500 + 200 * 2000 + (kWh - 300) * 3000;
    }

    if (totalTagihan > 1000000) {
        diskon = 0.10 * totalTagihan;
    }

    float totalSetelahDiskon = totalTagihan - diskon;

    cout << "Total penggunaan listrik: " << kWh << " kWh" << endl;
    cout << "Total tagihan sebelum diskon: Rp" << totalTagihan << endl;
    cout << "Diskon yang diberikan: Rp" << diskon << endl;
    cout << "Total tagihan setelah diskon: Rp" << totalSetelahDiskon << endl;

    return 0;
}

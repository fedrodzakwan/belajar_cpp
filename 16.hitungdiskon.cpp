#include <iostream>
using namespace std;

double hitungdiskon(int totalbelanja, double diskon) {
    if (totalbelanja >= 100000) {
        double hasil_diskon = totalbelanja * diskon;
        cout << "Mendapatkan diskon " << hasil_diskon << endl;
        return hasil_diskon;
    } else {
        return 0;
    }
}

int main() {
    int total_beli;
    int hargabarang;
    int total = 0;
    double diskon = 0.10;
    int total_hargas;
    double potongan_harga;


    cout << "Masukan total beli: ";
    cin >> total_beli;

    for (int i = 1; i <= total_beli; i++) {
        cout << "Masukan harga barang: ";
        cin >> hargabarang;

        cout << "barang ke-" << i << " " << hargabarang << endl;
        total = total + hargabarang;
    }
    cout << "Total belanjaan: " << total << endl;

    potongan_harga = hitungdiskon(total, diskon);
    total_hargas = total - potongan_harga;

    cout << "total harga barang " << total_hargas << endl;

    return 0;
}
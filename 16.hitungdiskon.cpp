#include <iostream>
using namespace std;

double hitungdiskon(int totalbelanja,double diskon){
    double hasil;
    if (totalbelanja >= 100000){
        double hasil_diskon  = totalbelanja * diskon;
        double hasil =  totalbelanja - hasil_diskon ;
        cout << " anda mendapatkan diskon sebesar 10% an total belanjaan kamu adalah " << hasil;
        return hasil;
    }
    else{
        cout << "total belanjaan anda " << totalbelanja;
        return 0;
    }



}

int main() {

    int total_beli;
    bool status_belanja = true;
    int hargabarang;
    int total=0;
    double diskon = 0.10;



    while (status_belanja == true){

        cout << "Masukan total beli" ;
        cin >> total_beli;

        for (int i=1;i<=total_beli;i++){
            cout << "Masukan harga barang ";
            cin >> hargabarang;

            total = total + hargabarang;

            cout << "total belanja " << total;
        }

        hitungdiskon(total,diskon);

        status_belanja = false;
            
        }

    return 0;
}
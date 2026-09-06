#include <iostream>
using namespace std;

int main() {

    int jumlah_beli;
    double harga;
    double total=0;
    double diskon =0.10;
    double total_diskon=0;
    double total_belanja=0;

    cout << "masukan jumlah beli";
    cin >> jumlah_beli;

    for(int i=1;i<=jumlah_beli;i++){
        cout <<"masukan jumlah harga beli :" ;
        cin >> harga;

      total = total + harga;
    }
    cout << endl;

    cout << "harga berlanjaan kamu " << total; 

    
    if (total >=100000){
      total_diskon=total*diskon;
      total_belanja=total-total_diskon;

      string teks = "anda mendapatkan diskon sebesar 10% ,total belanja anda " + to_string(int(total_belanja));
      
      int panjang_kalimat = teks.length();

      cout << "anda mendapat diskon" << endl;
          for (int i=1;i<=3;i++){
            for (int j=1;j<=panjang_kalimat;j++){
              if (i==1 or i==3){
                cout << "-";
              }
              else if (i==2 and j==1)
              {
                cout << teks;
              }
              
              else{
                  cout << " ";
              }
            }
            cout << endl;
          } 


    }
    else{
      cout << "anda tidak mendapatkan diskon" << endl;
    }



}
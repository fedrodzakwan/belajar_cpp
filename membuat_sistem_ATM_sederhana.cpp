#include <iostream>
using namespace std;

bool cekpin(int pin){
    if(pin == 9999){
        return true;
    }
    else{
        return false;
    }
}



int proses_penarikan(int saldo,int penarikan){
    if (penarikan <= saldo)
    {
        int sisasaldo = saldo-penarikan;
        cout << "sisa saldo anda" << sisasaldo;
        return sisasaldo;
    }
    else{
        cout << "saldo anda tidak cukup bang";
        return saldo;
    }
}


int main() {

    bool cekstatus=false;
    int cekpasword;
    bool cekstatus2;
    int saldo = 1000000;
    int penarikan;
    int sisa_saldo;
    bool cekpenarikan=true;
    bool cekpenarikan1 = true;
    string konfirmasi;

    while (cekstatus==false){
        cout << "masukan pasword";
        cin >> cekpasword;

        cekstatus2 = cekpin(cekpasword);

       
        if (cekpasword < 1000 or cekpasword > 9999){
            cout << "harap masukan 4 digit";
            cout << endl;
            cekstatus = false;
        }
        else if (cekstatus2 == false){
            cout << "pasword yang anda masukan salah silahkan coba lagi";
            cout << endl;
            cekstatus = false;
        }
        else{
            cekstatus = true;
        }
    }

    cout << "anda berhasil masuk";

    cout << "silahkan mau tarik berapa" << endl;
    cout << 100000 << endl;
    cout << 50000 << endl;

    while (cekpenarikan == true)
    {
        cout << "masukan pilihan";
        cin >> penarikan;

        saldo = proses_penarikan(saldo,penarikan);
        cekpenarikan1 =true;

        if(cekpenarikan1 == true){
            cout << "apakah mau menarik lagi?";
            cin >> konfirmasi;
            if (konfirmasi == "ya"){
            cekpenarikan = true;
            cekpenarikan1 = false;
            }
            else if (konfirmasi == "No"){
            cekpenarikan =false;
            }
            else{
            cout << "harap masukan sesuai perintah";
            cekpenarikan = false;
        
        }
        
        }

    }
    return 0;
}
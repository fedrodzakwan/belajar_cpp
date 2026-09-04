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

int main() {

    bool cekpasword=false;

    while (cekpasword==false){
        cout << "Masukan pasword";
        cin >> cekpasword;

        bool cek = cekpin(cekpasword);

        if (cek == false){
            "pasword anda salah";   
        }
        else if (cekpasword < 1000 or cekpasword > 9999)
        {
            cout << "silahkan masukan 4 digit";
        }
    }


    cout << "anda berhasil masuk";

    
    

  

    

    
    return 0;
}
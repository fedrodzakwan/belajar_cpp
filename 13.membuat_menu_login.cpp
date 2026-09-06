#include <iostream>
using namespace std;

int cekpassword(string pasword){
    if(pasword == "admin1234"){
        return true;
    }
    else{
        return false;
    }
    return true;
}

int main() {

    string inputpasword;
    bool status_login = false;

    while(status_login == false){
        cout << "masukan pasword";
        cin >> inputpasword;

        status_login = cekpassword(inputpasword);

        if(status_login == false){
            cout << "silakan coba lagi";
        }
    }
    cout << "berhasil masuk";
    
    return 0;
}
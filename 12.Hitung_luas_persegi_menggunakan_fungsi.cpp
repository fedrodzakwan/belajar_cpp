#include <iostream>
using namespace std;

int hitungluaspersegi(int sisi){
    int luaspersegi = sisi * sisi;
    return luaspersegi;
}
int main() {

    int s;
    cout << "masukan nilai sisi";
    cin >> s;

    int luas = hitungluaspersegi(s);

    cout << "luas persegi adalah" << luas;


    
    return 0;
}
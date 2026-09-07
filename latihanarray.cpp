#include <iostream>
using namespace std;

int main() {
    int jumlah;


    cout << "masukan jumalah data";
    cin >> jumlah;

    int kotak[jumlah];


    for(int i=0;i<=jumlah;i++){
        cout << "masukan nilai i pada index ke -" << i << endl;
        cin >> kotak[i];
    }

    cout << "\n--- HASIL ISI ARRAY ---" << endl;


    for (int i = 0; i < jumlah; i++) {
        cout << "Index ke-" << i << " berisikan nilai: " << kotak[i] << endl;
    }

    return 0;
}

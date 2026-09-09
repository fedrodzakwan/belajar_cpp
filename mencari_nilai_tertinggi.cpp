#include <iostream>
using namespace std;

int cariNilaiTertinggi(int data[], int ukuran) {
    int max = data[0]; 

    for (int i = 1; i < ukuran; i++) {
        if (data[i] > max) {
            max = data[i]; 
        }
    }
    return max; 
}
   



int main() {
    int jumlah_data;

    cout << "Masukan jumlah data";
    cin >> jumlah_data;

    int data[jumlah_data];

    for(int i=1 ;i<=jumlah_data;i++){
        cout << "masukan data ke -" << i;
        cin >> data[i];
    }
    
    return 0;
}
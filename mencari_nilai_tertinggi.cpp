#include <iostream>
using namespace std;

int mencarinilaitertinggi(int data[],int ukuran){
    int max = data[0];

    for(int i=1 ; i < ukuran ; i++){
        if(data[i] > max){
            max = data[i];
        }
    }
    return max;
}



int main() {

    int jumlah_data;
    cout << "masukan jumlah data";
    cin >> jumlah_data;
    
    int data[jumlah_data];

for(int i=0 ;i < jumlah_data; i++){
    cout << "Masukan data ke" << i + 1 << " ";
    cin >> data[i];
}

int max = mencarinilaitertinggi(data ,jumlah_data);

cout << "nilai tertinggi dari data tersebut" << max;



}
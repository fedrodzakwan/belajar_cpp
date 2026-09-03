#include <iostream>
using namespace std;

void buatsegitga(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout << " ";
        }
        for (int k=1;k<=(i*2)-1;k++){
            cout << "*";
        }
        cout << endl;
    }

}

int main() {
    int tinggi;
    cout << "masukan nilai tingginya";
    cin >> tinggi;

    buatsegitga(tinggi);

    return 0;
}
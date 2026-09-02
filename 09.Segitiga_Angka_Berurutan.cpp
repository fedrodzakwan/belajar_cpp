#include <iostream>
using namespace std;

int main() {
    int n;
    int angka=1;
    cout << "Masukan nilai n";
    cin >> n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout <<" "<< angka++;
        }
        cout << endl;
        
    }
    return 0;
}
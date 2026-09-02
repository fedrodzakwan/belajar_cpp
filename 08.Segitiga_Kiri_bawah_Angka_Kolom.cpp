#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan nilai n";
    cin >> n;

for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << j;
    }
    cout << endl;
}
cout << endl;

//hanya percobaan
for (int i=1;i<=n-1;i++){
    for (int j=1;j<=i;j++){
        if(i==4 and j==3){
            cout << 4;
        }
        else{
            cout << j;
        }
        
    }
    cout << endl;
}


    return 0;
}
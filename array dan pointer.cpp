#include <iostream>
using namespace std;

int main() {
    // Memesan memori secara dinamis untuk variabel HP di RAM
    int *hp_player = new int; 

    // Mengisi nilai ke dalam alamat memori tersebut
    *hp_player = 100;

    cout << "HP Player saat ini : " << *hp_player << endl;
    cout << "Alamat RAM-nya di  : " << hp_player << endl;

    // "Cheat" / Modifikasi nilai HP secara langsung lewat pointer!
    *hp_player = 9999;
    cout << "HP Player setelah di-cheat : " << *hp_player << endl;

    // Membersihkan memori setelah selesai dipakai
    delete hp_player;

    return 0;
}
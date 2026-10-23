#include <iostream>
using namespace std;

void upgradesenjata(int *senjata){

    *senjata = *senjata + 100;

}

int main() {
    int level_sejata = 50;

    upgradesenjata(&level_sejata);

    cout << level_sejata ;

    return 0;
}
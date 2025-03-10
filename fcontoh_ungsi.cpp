#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput () {
    cout << "Masukkan Nilai Alas : ";
    cin >> alas;

    cout << "Masukkan Nilai Tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}
    


void procedurOutput (){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}

int main () {
    procedurInput();
    procedurOutput();
}
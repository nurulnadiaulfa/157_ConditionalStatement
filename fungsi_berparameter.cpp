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
    
double hitungLuas2(double a, double t){
    return 0,5 * a * t;
}

void procedurOutput (){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}

void procedurOutput2 (){
    cout << "Luas Segitiga = " << hitungluas2(alas, tinggi) << endl;
}

int main () {
    procedurInput();
    procedurOutput();
    procedurOutput2();
}
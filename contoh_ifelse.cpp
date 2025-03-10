#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput () {
    cout << "Masukkan Nilai Alas : ";
    cin >> alas;

    cout << "Masukkan Nilai Tinggi : ";
    cin >> tinggi;
}


    
double hitungLuas2(double a, double t){
    return 0,5 * a * t;
}

string ukuranSegitiga(double l){
    //jika luas >60 
    if (1 > 60){
        return "besar";
    }
    else {
        return "kecil";
    }
}

void procedurOutput2 (){
    cout << "Luas Segitiga = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}

int main () {
    procedurInput();
    procedurOutput2();
}
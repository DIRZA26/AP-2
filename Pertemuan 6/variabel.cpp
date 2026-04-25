#include <iostream>
using namespace std;

// variabel global
string variabelGlobal = "laptop";

void namaVariabel(){
    string variabelLokal = "komputer"; // variabel lokal

    // coba akses 1 (benar, dalam fungsi yang sama)
    cout << variabelLokal << endl;

    // coba akses 3 (akses variabel global)
    cout << variabelGlobal << endl;
}

int main(){
    namaVariabel();

    // coba akses 2 (tidak bisa, karena variabel lokal hanya di dalam fungsi)
    // cout << variabelLokal << endl; // ERROR

    return 0;
}
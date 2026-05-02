#include <iostream>
using namespace std;

//fungsi untuk pointer sebagai parameter
void ubahNilai (int *p){ // p menerima alamat x isi nya adalah 5
    *p = 20; // *p = 20 --> ubah isi alamat
}
int main (){
    system( "CLS");
    
    // 1. pointer dalam pointer
    cout<< "== pointer dalam Pointer"<<endl;
    int a = 64; // variabel biasa
    int *p = &a; // pointer ke a
    int **pp = &p; //pointer ke pointer p

    cout<< "Nilai a: "<< a <<endl; //10
    cout << "Nilai *p : "<< *p << endl;// isi alamat a = 64
    cout << "Nilai **pp : "<< **pp <<endl; //isi pointer p

    // 2. Pointer dalam Array
    cout<< "=== Pointer dalam array ==="<< endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    cout << "Elemen 1 : "<< *ptr <<endl; // arr[0] --> 1
    cout << "Elemen 2 : "<< *(ptr + 1) <<endl; // arr[0] --> 2
    cout << "Elemen 1 : "<< *(ptr + 2) <<endl; // arr[0] --> 3

    // 3. Pointer dalam string
    cout << "=== Pointer dalam string ===" << endl;
    char *organisasi = "Ilmu Komputer Laboratory Center";
    cout << "awal : " << organisasi <<endl;

    organisasi += 5; // geser pointer
    cout << " geser : " << organisasi <<endl; // setelah +5 mulai dari k

    //4. pointer sebagai parameter

    cout << " === Pointer sebagai parameter"<< endl;
    
    int x = 5;
    cout << "sebelum: "<< x << endl;
    
    ubahNilai(&x);
    cout<< "sesudah: "<< x << endl;
}
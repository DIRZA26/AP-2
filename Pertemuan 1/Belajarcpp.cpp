#include <iostream> //header standar c++
#include <conio.h>//header untuk getche() dan getch()
using namespace std;

int main (){
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;

    cout << "hello world !!" <<endl;

    cout << "masukkan nama: ";
    // cin >> nama;
    getline(cin,nama);

    cout << "masukkan KOM: ";
    cin >> kom;

    cout << "masukkan NIM: ";
    cin >>nim;

    cout << "masukkan IP: ";
    cin >>ip;

    cout << "masukkan jenis kelamin (L/P): "; //getche
    jeniskelamin = getche(); //agar karakter langsung tampil, jadi gaperlu tekan enter

    /* ini untuk output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jeniskelamin << endl;
    putchar(jeniskelamin); //untuk menampilkan karakter "jenis kelamin"

    getch();// karakter yang kita ketik tidak ditampilkan dilayar
    printf("press any button to continue... ");
    getch();
}
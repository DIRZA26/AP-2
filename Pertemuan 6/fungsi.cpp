#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan (void)
void tampilkanPesan(){
    cout<<"selamat datang di ap2"<<endl;
}
int tambah(int a, int b){
    return a+b;
}
//Fungsi overload, fungsi dengan nama yang sama,tapi parameternya beda, tipenya beda
int kali(int a,int b){
    return a * b;
}
double kali(double a, double b){
    return a * b;
}
//fungsi rekursif, fungsi yang memanggil dirinya sendiri
int faktorial(int n){
if (n == 0 || n==1){
    return 1;
} else {
    return n * faktorial(n-1);

}
}

 
int main(){
    system("CLS");
    //Memanggil fungsi tanpa nilai balikan
    tampilkanPesan();
    //memanggil fungsi dengan nilai balikan
    int x=5, y=3;
    int hasilTambah = tambah(x,y);
    cout<<"hasil penjumlahan"<<hasilTambah<<endl;

    //menggunakan fungsi overload
    int hasilkaliInt = kali(x,y);

    double n =3, m=5;
    double hasilkaliDouble = kali(n,m);
    
    cout<<"hasil Perkalian (int): "<<hasilkaliInt<<endl;
    cout<<"hasil perkalian (double): "<<hasilkaliDouble<<endl;
    
    //menggunakan fungsi rekursif
    int angka=5;
    cout<<"faktorial dari "<<angka<<" adalah"<< faktorial(angka)<<endl;
}


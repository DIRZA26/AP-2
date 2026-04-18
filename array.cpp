#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
//Array declaration & initialization
//2 cara membuat array


//cara 1: array kosong

// string nama[5];
// nama[0] = "alya";
// nama[1] = "parul";
// nama[2] = "hana";
// nama[3] = "dewi";
// nama[4] = "padhil";


//cara 2: array langsung diisi
string nama[5] ={"alya", "parul", "hana", "dewi", "Padhil"};
// string nama[] = {"alya", "parul", "hana", "dewi", "padhil"}

//Menampilkan data dalam array
//cout << nama[0]<<endl;
//cout << nama[3]<<endl;

// //Menggunakan looping ascending
// for (int i =0; i<5; i++){
//     cout <<nama[i] <<endl;
// }

// //descending
// for (int i=4; i >=0; i--){
//     cout<< nama[i]<<endl;
// }

//multidimensional array
//1 2 3
//4 5 6

// int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
// for (int i = 0; i<2; i++){
//     for (int j =0;j<3; j++){
//         cout << matrix [i][j]<<" ";
//     }
//     cout <<endl; }

// //string (array of char)
// string nama= "Alya";
// cout << nama[0]<< endl;
// cout << nama[2]<<endl;

// cout<< nama.length(); //untuk menghitung jumlah karakter

// string s1 = "hello";
// string s2 = "world";
// // 1.s1=s2
// s1 = s2;
// cout<< "s1 Sekarang = " <<s1 <<endl;

// // 2. s1 = s1 +s2
// s1= "hello";//reset nilai
// cout<< "hasil Gabungan= " <<s1+s2<<endl;
// //3. s1.length() 
// cout<< s1.length()<<endl; //5
// cout<< (s1+s2).length()<<endl;//10

// //4. s1.substr(n,m) n itu mulai dari brp, m itu panjang brp
// cout<< s1.substr(2,3)<<endl;

//operator sizeof
//int angka = 10;
//cout<<sizeof(angka);//4

// int nilai[]= {10,20,30,40,50};
// cout<<sizeof(nilai);

//array library
//misal array biasa:float nilai[5]
// array<float,5> nilai={87.5,90,100,95.7,78.3};
// cout<<"nilai: ";
// for (int i= 0;i<nilai.size();i++){
//     cout<<nilai[i]<< " ";
// }


}
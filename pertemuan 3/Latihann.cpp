#include <iostream>
using namespace std;
int main(){
     float bmi,berat,tinggi;
    system("CLS");
    cout<<"Masukkan berat badan anda(kg): "<<endl;
    cin>>berat;
    cout<<"Masukkan tinggi badan anda(m): "<<endl;
    cin>>tinggi;

    bmi = berat / (tinggi * tinggi);

    if (bmi < 18.5) {
        cout<<"bmi anda: "<<bmi<<endl;
        cout<<"kategori berat badan: kurang"<<endl;
        
    }
    else if (bmi >=18.5 && bmi< 25){
        cout<<"bmi anda: "<<bmi<<endl;
        cout<<"kategori berat badan: normal"<<endl;

    }
     else if (bmi >=25 && bmi < 30){
        cout<<"bmi anda: "<<bmi<<endl;
        cout<<"kategori berat badan: berlebih"<<endl;
     }
     else{
         cout<<"bmi anda: "<<bmi<<endl;
        cout<<"kategori berat badan: obesitas"<<endl;
     
     }
}
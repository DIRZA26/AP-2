#include <iostream>
using namespace std;

class ContohAkses {
    private:
    int privateVar;

    protected:
        int protectedVar;

        public:
        int publicVar;
        //constructor
    ContohAkses (){
    privateVar = 1;
    protectedVar = 2;
    publicVar = 3;
}
void tampilkanSemua(){
    cout <<"akses dari dalam class: "<<endl;
    cout << privateVar<<endl;
     cout << protectedVar<<endl;
      cout << publicVar<<endl;
}
};

//inheritance(pewarisan), class turunan 
class Turunan : public ContohAkses{
    public:
    void aksesProtected(){
    //cout << privateVar<<endl;//error
     cout << protectedVar<<endl;
      cout << publicVar<<endl;
    }
};

int main(){
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\n akses dari luar class: "<<endl;
    // cout << obj.privateVar <<endl;//error
    // cout << obj.protectedVAr <<endl;//error
    cout << obj.publicVar <<endl;

    cout <<"akses dari kelas Turunan : "<<endl;
    Turunan tur;
    tur.aksesProtected();
}
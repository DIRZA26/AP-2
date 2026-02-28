#include <iostream>
using namespace std;

int main() {
    float r;
    float luas, volume;
    float phi = 3.14;

    cout << "Masukkan jari-jari: ";
    cin >> r;

    volume = (float)4 / (float)3 * phi * r * r *r;
    luas= 4 * phi * r * r;

    cout << "hasil Luas = " << luas << endl;
    cout << " hasil volume = " << volume << endl;

    return 0;
}

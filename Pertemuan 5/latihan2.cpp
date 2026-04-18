#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    // 1. Tampilkan seluruh isi vector
    cout << "Isi vector awal:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // 2. Tambahkan nama "Houra" ke belakang vector
    mahasiswa.push_back("Houra");

    // 3. Hapus nama terakhir
    mahasiswa.pop_back();

    // 4. Hapus data pada indeks ke-1
    mahasiswa.erase(mahasiswa.begin() + 1);

    // 5. Tampilkan isi vector setelah perubahan
    cout << "\nIsi vector setelah perubahan:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // 6. Tampilkan jumlah data yang tersisa
    cout << "\nJumlah data tersisa: " << mahasiswa.size() << endl;

    return 0;
}
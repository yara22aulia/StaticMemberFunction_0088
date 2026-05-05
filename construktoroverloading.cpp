#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa() {
    // Constructor default tanpa parameter
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim; // definisi hanya NIM
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama; // definisi hanya NAMA
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim; // definisi NIM dan NAMA
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main() {
    mahasiswa mhs1(102030);              // memanggil constructor hanya NIM
    mahasiswa mhs2("Faid");               // memanggil constructor hanya Nama
    mahasiswa mhs3(810203, "Yuratama");   // memanggil constructor NIM dan Nama

    // tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}
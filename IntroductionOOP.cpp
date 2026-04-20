//Library
#include <iostream>
using namespace std;

class Mahasiswa{
public :
    int nim;
    string nama;
    float nilai;

    void printData(){
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nilai : " << nilai << endl;
    }
}; // batas class

// mau di tampilkan
int main(){
    Mahasiswa mhs;
    mhs.nim = 2025;
    mhs.nama = "ikhwal";
    mhs.nilai = 100;

    mhs.printData();
}
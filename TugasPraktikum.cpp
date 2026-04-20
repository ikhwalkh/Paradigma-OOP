//Library
#include <iostream>
using namespace std;

class barang{
public :
   string nama;
   float jumlah;
   string kategori;
   string tanggalproduksi;

   void printData(){
    cout << "Nama : " << nama << endl;
    cout << "Kategori : " << kategori << endl;
    cout << "Jumlah : " << jumlah << endl;
    cout << "TanggalProduksi : " << tanggalproduksi << endl;
   }
}; // batas class barang

// mau di tampilkan  elektronik
int main(){
    barang elektronik;
    barang nonElektronik;

    elektronik.nama = "Tablet";
    elektronik.jumlah = 10;
    elektronik.kategori = "elektronik";
    elektronik.tanggalproduksi = "2026-02-29";

    //nonelektronik
    nonElektronik.nama = "Kursi";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalproduksi = "2026-02-29";

    elektronik.printData();
    nonElektronik.printData();
}
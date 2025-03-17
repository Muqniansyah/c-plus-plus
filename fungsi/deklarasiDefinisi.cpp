#include <iostream>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}


/*
Fungsi C++ terdiri dari dua bagian:

Deklarasi: tipe pengembalian, nama fungsi, dan parameter (jika ada)
Definisi: isi fungsi (kode yang akan dieksekusi)
Catatan: Jika suatu fungsi yang ditentukan pengguna, seperti myFunction()dideklarasikan setelah main()fungsi tersebut, maka akan terjadi kesalahan.
Namun, adalah mungkin untuk memisahkan deklarasi dan definisi fungsi - untuk pengoptimalan kode.
Anda akan sering melihat program C++ yang memiliki deklarasi fungsi di atas main(), dan definisi fungsi di bawah main(). Ini akan membuat kode lebih terorganisasi dan lebih mudah dibaca.
*/

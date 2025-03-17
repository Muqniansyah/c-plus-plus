#include <iostream>
using namespace std;

int main() {
//	Menangani Semua Jenis Pengecualian (...)
//	Jika Anda tidak mengetahui throw tipe yang digunakan di tryblok, Anda dapat menggunakan sintaks "tiga titik" ( ...) di dalam catch blok, yang akan menangani semua jenis pengecualian
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}


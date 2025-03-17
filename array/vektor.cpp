#include <iostream>
#include <vector> // Including the vector library
using namespace std;

int main() {
//	Untuk operasi yang memerlukan penambahan dan penghapusan elemen array, C++ menyediakan vektor , yang merupakan array yang dapat diubah ukurannya .
//Ukuran vektor bersifat dinamis, artinya dapat tumbuh dan menyusut sesuai kebutuhan.
//Vektor ditemukan di <vector>perpustakaan, dan dilengkapi dengan banyak fungsi berguna untuk menambah, menghapus, dan memodifikasi elemen

  // Sebuah vektor dengan 3 elemen
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  
  // Menambahkan elemen lain ke vektor
  cars.push_back("Tesla");
  
  //  Fitur ini hanya didukung di C++11 ke atas. Jika compiler masih menggunakan C++98 atau C++03, akan terjadi error.
  for (string car : cars) {
    cout << car << "\n";
  }
  
  return 0;
}


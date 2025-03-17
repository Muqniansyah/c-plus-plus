#include <iostream>
using namespace std;
 
int main () {
//	C++ menggunakan +operator untuk penjumlahan dan penggabungan. Angka-angka ditambahkan. Rangkaian dirangkai.

	// contoh jika Anda menambahkan dua angka, hasilnya akan menjadi angka
  int x = 10;
  int y = 20;
  int z = x + y;
  cout << z << "\n";
  
	// contoh jika Anda menambahkan dua string, hasilnya akan berupa penggabungan string
  string a = "10";
  string b = "20";
  string c = a + b;
  cout << c;
  
	// noted : Jika Anda mencoba menambahkan angka ke dalam string, akan terjadi kesalahan. 
  return 0;
}


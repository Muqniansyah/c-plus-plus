#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting1 = "Hello";  // Regular String
  char greeting2[] = "Hello";  // C-Style String (an array of characters / serangkaian karakter)
  cout << greeting1 << "\n";
  cout << greeting2;
  
  return 0;
  
  /*
  String gaya C dibuat dengan chartipe, bukan string.
  Nama tersebut berasal dari bahasa C , yang, tidak seperti banyak bahasa pemrograman lainnya, tidak memiliki string tipe untuk membuat variabel string dengan mudah. 
  Sebagai gantinya, Anda harus menggunakan char tipe tersebut dan membuat array karakter untuk membuat "string" dalam C.
  Karena C++ dikembangkan sebagai perluasan dari C, C++ terus mendukung cara pembuatan string ini dalam C++.
  Catatan: Lebih mudah untuk bekerja dengan string tipe standar, daripada string gaya C. Namun, 
  salah satu alasan beberapa pengguna terus menggunakan string gaya C adalah karena mereka memiliki akses ke fungsi dari pustaka standar C.
  */
}

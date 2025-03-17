#include <iostream>
using namespace std;

int main() {
//	Perulangan dapat mengeksekusi suatu blok kode selama suatu kondisi tertentu tercapai. Perulangan berguna karena menghemat waktu, mengurangi kesalahan, dan membuat kode lebih mudah dibaca.
	//	Perulangan while akan mengulang blok kode selama kondisi yang ditentukan terpenuhi true
	//	contoh ini kode dalam loop akan berjalan, berulang-ulang, selama variabel ( i) kurang dari 5
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  
  cout << "\n";
  
	//  Loop do/while merupakan varian dari whileloop. Loop ini akan mengeksekusi blok kode satu kali, sebelum memeriksa apakah kondisinya benar, kemudian akan mengulang loop selama kondisinya benar.
	// Contoh di bawah ini menggunakan do/whileloop. Loop akan selalu dijalankan setidaknya satu kali, bahkan jika kondisinya salah, karena blok kode dijalankan sebelum kondisi diuji
  int a = 0;
  do {
    cout << a << "\n";
    a++;
  }
  while (a < 5);
  
  //  Catatan: Jangan lupa untuk menambah variabel yang digunakan dalam kondisi, jika tidak, loop tidak akan pernah berakhir!
  
//  break while loop
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break;
    }
  }
  
//continue while loop
  int i = 0;
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  }
  
  return 0;
}

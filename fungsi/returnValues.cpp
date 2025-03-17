#include <iostream>
using namespace std;

/*
Kata voidkunci yang digunakan pada contoh sebelumnya menunjukkan bahwa fungsi tersebut tidak boleh mengembalikan nilai. 
Jika Anda ingin fungsi tersebut mengembalikan nilai, Anda dapat menggunakan tipe data (seperti int, string, dst.) sebagai ganti void, 
dan menggunakan return kata kunci di dalam fungsi
*/
int myFunction(int x) {
  return 5 + x;
}

// Contoh ini mengembalikan jumlah fungsi dengan dua parameter
int myFunction2(int x, int y) {
  return x + y;
}

// Contoh anda juga dapat menyimpan hasilnya dalam variabel
int myFunction3(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(3);
  cout << "\n";
  cout << myFunction2(5, 3);
  cout << "\n";
	//  menyimpan hasilnya dalam variabel	
  int z = myFunction3(5, 3);
  cout << z;
  
  return 0;
}


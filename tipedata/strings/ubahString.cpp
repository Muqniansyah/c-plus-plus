#include <iostream>
#include <string>
using namespace std;

int main() {
	//	Untuk mengubah nilai karakter tertentu dalam string, lihat nomor indeks, dan gunakan tanda kutip tunggal
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString << "\n";
  
	//  Perpustakaan ini <string> juga memiliki at() fungsi yang dapat digunakan untuk mengakses karakter dalam string
  string myString2 = "Hello";
  cout << "Original string: " << myString2 << "\n";
  
  cout << "karakter pertama: " << myString2.at(0) << "\n";
  cout << "karakter kedua: " << myString2.at(1) << "\n";
  cout << "karakter terakhir: " << myString2.at(myString2.length() - 1) << "\n";
  
  myString2.at(0) = 'J';
  cout << "Changed string: " << myString2;
  
  return 0;
}


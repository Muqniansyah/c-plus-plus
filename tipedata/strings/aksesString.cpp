#include <iostream>
#include <string>
using namespace std;

int main() {
	//	Anda dapat mengakses karakter dalam string dengan merujuk ke nomor indeksnya di dalam tanda kurung siku []
  
    // contoh ini mencetak karakter pertama dalam myString
  string myString = "Hello";
  cout << myString[0] << "\n";
  
	// noted: Indeks string dimulai dengan 0: [0] adalah karakter pertama. [1] adalah karakter kedua, dst.
	
	// Untuk mencetak karakter terakhir dari sebuah string,	 dapat menggunakan kode berikut
  string myString2 = "Hello";
  cout << myString2[myString2.length() - 1];
  
  return 0;
}


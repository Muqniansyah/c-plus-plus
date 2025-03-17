#include <iostream>
#include <string>
using namespace std;

int main() {
//	Dimungkinkan untuk menggunakan operator ekstraksi >> untuk cin menyimpan string yang dimasukkan oleh pengguna
// Namun, cin menganggap spasi (whitespace, tab, dsb) sebagai karakter penutup, yang artinya hanya dapat menyimpan satu kata (bahkan jika Anda mengetik banyak kata)
  
	// Itulah sebabnya, saat bekerja dengan string, kita sering menggunakan getline() fungsi untuk membaca sebaris teks. 
	// Fungsi ini mengambil cin parameter pertama, dan variabel string sebagai parameter kedua
  string fullName;
  cout << "Type your full name: ";
	//  cin >> fullName; JIKA TIDAK INGIN MENGAMBIL SATU BARIS BISA MEMAKAI CODE INI, KARNA HANYA MENGAMBIL SATU KALI KETIK
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  
  return 0;
}


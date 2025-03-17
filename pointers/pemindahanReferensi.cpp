#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	Pada contoh dari halaman sebelumnya, kami menggunakan variabel pointer untuk mendapatkan alamat memori dari sebuah variabel (digunakan bersama dengan operator & referensi ). 
	Namun, Anda juga dapat menggunakan pointer untuk mendapatkan nilai dari variabel, dengan menggunakan *operator ( operator dereferensi )
	*/
	
  string food = "Pizza";  // Variable declaration
  string* ptr = &food;    // Pointer declaration

  // Reference: Output the memory address of food with the pointer
  cout << ptr << "\n";

  // Dereference: Output the value of food with the pointer
  cout << *ptr << "\n";
  
  return 0;
  
  /*
  Perhatikan bahwa *tanda ini bisa membingungkan di sini, karena ia melakukan dua hal berbeda dalam kode kita:
	Bila digunakan dalam deklarasi (string* ptr), ia menciptakan variabel penunjuk .
	Bila tidak digunakan dalam deklarasi, ia bertindak sebagai operator dereferensi .
  */
}


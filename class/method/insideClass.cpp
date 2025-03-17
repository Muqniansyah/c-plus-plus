#include <iostream>
using namespace std;

//Contoh class Dalam
class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  
  return 0;
  
  /*
  Metode Kelas
	Metode adalah fungsi yang dimiliki kelas.
	Ada dua cara untuk mendefinisikan fungsi yang termasuk dalam suatu kelas:
	1. Definisi kelas dalam
	2. Definisi kelas luar
	Dalam contoh berikut, kami mendefinisikan suatu fungsi di dalam kelas dan menamainya " myMethod".

	Catatan: Anda mengakses metode seperti Anda mengakses atribut; dengan membuat objek kelas dan menggunakan sintaks titik ( .)
  */
}

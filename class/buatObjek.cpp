#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Buat objek MyClass

  // Akses atribut dan tetapkan nilai
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // cetak nilai
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  
  return 0;
  
  /*
  Membuat Objek
	Dalam C++, sebuah objek dibuat dari sebuah kelas. Kita telah membuat kelas bernama MyClass, jadi sekarang kita dapat menggunakannya untuk membuat objek.
	Untuk membuat objek MyClass, tentukan nama kelas, diikuti dengan nama objek.
	Untuk mengakses atribut kelas ( myNumdan myString), gunakan sintaks titik ( .) pada objek
  */
}


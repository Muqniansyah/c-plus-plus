#include <iostream>
using namespace std;

//Konstruktor dalam C++ adalah metode khusus yang secara otomatis dipanggil ketika objek suatu kelas dibuat.
//Untuk membuat konstruktor, gunakan nama yang sama dengan kelas, diikuti tanda kurung ()
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  
  return 0;
  
//  Catatan: Konstruktor memiliki nama yang sama dengan kelas, selalu public, dan tidak memiliki nilai balik.
}


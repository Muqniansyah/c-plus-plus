#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  
  return 0;
  
  /*
  	Konstruktor juga dapat mengambil parameter (seperti fungsi biasa), yang dapat berguna untuk menetapkan nilai awal untuk atribut.
	Kelas berikut memiliki atribut brand, modeldan year, serta konstruktor dengan parameter yang berbeda. 
	Di dalam konstruktor, kita menetapkan atribut yang sama dengan parameter konstruktor ( brand=x, dst.). 
	Saat kita memanggil konstruktor (dengan membuat objek kelas), kita meneruskan parameter ke konstruktor, yang akan menetapkan nilai atribut terkait ke yang sama
  */
}


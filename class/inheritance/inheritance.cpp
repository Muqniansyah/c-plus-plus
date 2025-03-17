#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  
  return 0;
  
  /*
  Dalam C++, dimungkinkan untuk mewarisi atribut dan metode dari satu kelas ke kelas lain. Kami mengelompokkan "konsep pewarisan" ke dalam dua kategori:
	kelas turunan (anak) - kelas yang mewarisi dari kelas lain
	kelas dasar (induk) - kelas yang diwarisi dari
	Untuk mewarisi dari suatu kelas, gunakan : simbol.
	Dalam contoh di bawah, Carkelas (anak) mewarisi atribut dan metode dari Vehiclekelas (induk)
	
	Mengapa dan Kapan Menggunakan "Inheritance"?
	Berguna untuk penggunaan ulang kode: gunakan kembali atribut dan metode kelas yang ada saat Anda membuat kelas baru.
  */
}



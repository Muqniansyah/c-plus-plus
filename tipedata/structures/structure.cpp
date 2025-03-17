#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;
	
//	Untuk mengakses anggota suatu struktur, gunakan sintaks titik ( .)
  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  
//  Anda dapat menggunakan koma ( ,) untuk menggunakan satu struktur dalam banyak variabel
  struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here

  // Put data into the first structure
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Put data into the second structure
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  
//  Untuk membuat struktur bernama, letakkan nama struktur tepat setelah structkata kunci. contoh ini menggunakan satu struktur untuk mewakili dua mobil
// Create a car structure and store it in myCar1;
  car mobil1;
  mobil1.brand = "BMW";
  mobil1.model = "X5";
  mobil1.year = 1999;

  // Create another car structure and store it in myCar2;
  car mobil2;
  mobil2.brand = "Ford";
  mobil2.model = "Mustang";
  mobil2.year = 1969;
 
  // Print the structure members
  cout << mobil1.brand << " " << mobil1.model << " " << mobil1.year << "\n";
  cout << mobil2.brand << " " << mobil2.model << " " << mobil2.year << "\n";
  
  return 0;
}

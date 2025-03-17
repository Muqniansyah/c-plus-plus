#include <iostream>
using namespace std;

//Secara default, C++ tidak mengizinkan dua enum dalam satu ruang lingkup (namespace) yang memiliki anggota dengan nama yang sama, karena bisa menyebabkan ambiguity.
enum Level {
  LOW,
  MEDIUM,
  HIGH
}; 

enum Performa {
  KECIL = 25,
  MENENGAH = 50,
  TINGGI = 75
}; 

enum Peringkat {
  PERTAMA = 1,
  KEDUA, // Now 2
  KETIGA // Now 3
};

int main() {
  enum Level myVar = MEDIUM;
  cout << myVar << "\n";
  
//  ubah nilai
  enum Performa myVar2 = MENENGAH;
  cout << myVar2 << "\n";
  
//Perlu diingat bahwa jika Anda menetapkan nilai pada satu item tertentu, item berikutnya akan memperbarui nomornya sesuai dengan nilai tersebut
  enum Peringkat myVar3 = KEDUA;
  cout << myVar3;	
  
  return 0;
}


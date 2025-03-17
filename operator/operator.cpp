#include <iostream>
using namespace std;

int main() {
// Operator digunakan untuk melakukan operasi pada variabel dan nilai.
  
  // operator aritmatika -> untuk melakukan operasi matematika umum.
  int x = 5;
  int y = 3;
  
  cout << "Operator Aritmatika \n";
  cout << "Penjumlahan : " << x + y << "\n";
  cout << "Pengurangan : " << x - y << "\n";
  cout << "Perkalian : " << x * y << "\n";
  cout << "Pembagian : " << x / y << "\n";
  cout << "Modulus atau sisa bagi : " << x % y << "\n";
  cout << "Increment : \n";
  ++x;
  cout << x << "\n";
  cout << "Decrement : \n";
  --x;
  cout << x << "\n\n";
  
  //  operator penugasan -> untuk menetapkan nilai ke variabel.
  int z = 5;
  
  cout << "Operator Penugasan \n";
  cout << "Contoh = : " << z << "\n";
  
  z += 3;
  cout << "Contoh += : " << z << "\n";
  
  z -= 3;
  cout << "Contoh -= : " << z << "\n";
  
  z *= 3;
  cout << "Contoh *= : " << z << "\n";
  
  z /= 3;
  cout << "Contoh /= : " << z << "\n";
  
  z %= 3;
  cout << "Contoh %= : " << z << "\n";
  
  z &= 3;
  cout << "Contoh &= : " << z << "\n";
  
  z |= 3;
  cout << "Contoh |= : " << z << "\n";
  
  z ^= 3;
  cout << "Contoh ^= : " << z << "\n";
  
  z >>= 3;
  cout << "Contoh >>= : " << z << "\n";
  
  z <<= 3;
  cout << "Contoh <<= : " << z << "\n\n";
  
   //  operator perbandingan -> untuk membandingkan dua nilai (atau variabel).
  int b = 3;
  
  cout << "Operator Perbandingan \n";
  cout << "Contoh Sama dengan (==) : " << (x == y) << "\n"; // mengembalikan 0 (salah) karena 5 tidak sama dengan 3
  cout << "Contoh tidak sama (!=) : " << (x != y) << "\n"; // mengembalikan 1 (benar) karena 5 tidak sama dengan 3
  cout << "Contoh lebih besar dari (>) : " << (x > y) << "\n"; // mengembalikan 1 (benar) karena 5 lebih besar dari 3
  cout << "Contoh kurang dari (<) : " << (x < y) << "\n"; // mengembalikan 0 (salah) karena 5 tidak kurang dari 3
  cout << "Contoh lebih besar dari atau sama dengan (>=) : " << (x >= y) << "\n"; // mengembalikan 1 (benar) karena lima lebih besar dari, atau sama dengan 3
  cout << "Contoh kurang dari atau sama dengan (<=) : " << (x <= y) << "\n\n"; // mengembalikan 0 (salah) karena 5 tidak kurang dari atau sama dengan 3
  
  //  operator logika -> untuk menentukan logika antara variabel atau nilai.
  int c = 5;
  int d = 3;
  
  cout << "Operator Logika \n";
  cout << "Contoh logika dan (&&) : " << (x > 3 && x < 10) << "\n"; // mengembalikan nilai true (1) karena 5 lebih besar dari 3 DAN 5 kurang dari 10
  cout << "Contoh logika atau (||) : " << (x > 3 || x < 4) << "\n"; // mengembalikan nilai benar (1) karena salah satu kondisi benar (5 lebih besar dari 3, tetapi 5 tidak kurang dari 4)
  cout << "Contoh logika not (!) : " << (!(x > 3 && x < 10)) << "\n\n"; // mengembalikan false (0) karena ! (tidak) digunakan untuk membalikkan hasilnya
  
  return 0;
}


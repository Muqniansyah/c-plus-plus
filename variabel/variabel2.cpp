#include <iostream>
using namespace std;

int main() {
  // Objek cout digunakan bersama dengan << operator untuk menampilkan variabel. Untuk menggabungkan teks dan variabel, pisahkan keduanya dengan << operator.
  int myAge = 35;
  cout << "I am " << myAge << " years old. \n";
  
  // Untuk menambahkan variabel ke variabel lain, Anda dapat menggunakan + operator
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum << "\n";
  
  // Untuk mendeklarasikan lebih dari satu variabel dengan tipe yang sama, gunakan daftar yang dipisahkan dengan koma
  int a = 5, b = 6, c = 50;  
  cout << a + b + c << "\n";
  
  // Anda juga dapat menetapkan nilai yang sama ke beberapa variabel dalam satu baris
  int d, e, f;
  d = e = f = 50;
  cout << d + e + f;
  
  return 0;
}


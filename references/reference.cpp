#include <iostream>
#include <string>
using namespace std;

int main() {
//	Variabel referensi adalah "referensi" ke variabel yang sudah ada, dan dibuat dengan &operator
  string food = "Pizza";
  string &meal = food;

//Sekarang, kita dapat menggunakan nama variabel food atau nama referensi meal untuk merujuk ke food variabel
  cout << food << "\n";
  cout << meal << "\n";

//Ketika sebuah variabel dibuat dalam C++, sebuah alamat memori ditetapkan ke variabel tersebut. 
//Dan ketika kita menetapkan sebuah nilai ke variabel tersebut, nilai tersebut disimpan di alamat memori ini.
//Untuk mengaksesnya, gunakan & operator, dan hasilnya akan menunjukkan tempat penyimpanan variabel. ini contoh alamat memory :
  string makanan = "Roti";
  cout << &makanan;
  
  return 0;
}


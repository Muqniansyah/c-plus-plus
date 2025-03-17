#include <iostream>
#include <string>
using namespace std;

int main() {
//	pointer adalah variabel yang menyimpan alamat memori sebagai nilainya.
//Variabel pointer menunjuk ke tipe data (seperti intatau string) dengan tipe yang sama, dan dibuat dengan *operator. Alamat variabel yang Anda gunakan ditetapkan ke pointer
  
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
  
  return 0;
  
  /*
  Contoh dijelaskan
	Buat variabel penunjuk dengan nama ptr, yang menunjuk ke suatu stringvariabel, dengan menggunakan tanda bintang *( string* ptr). Perhatikan bahwa tipe penunjuk harus sesuai dengan tipe variabel yang Anda gunakan.
	Gunakan &operator untuk menyimpan alamat memori dari variabel yang disebut food, dan tetapkan ke pointer.
	Sekarang, ptrmemegang nilai food alamat memori 
  */
}


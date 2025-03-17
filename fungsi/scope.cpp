//contoh lokal dan global scope
#include <iostream>
using namespace std;

//Dalam C++, variabel hanya dapat diakses di dalam wilayah tempat variabel tersebut dibuat. Ini disebut scope.

void myFunction() {
  // Variabel lokal milik myFunction
  int x = 5;
  
  // Cetak variabel x
  cout << x;
}

// Global variable g
int g = 5;

void myFunctionGlobal() {
  // Kita bisa menggunakan g di sini
  cout << g << "\n";
}

int main() {
  myFunction();
  
  cout << "\n";
  
  myFunctionGlobal();
  
  // Kita juga bisa menggunakan g di sini
  cout << g;
  
  return 0;
  
  /*
  Cakupan Lokal : Variabel yang dibuat di dalam suatu fungsi termasuk dalam lingkup lokal fungsi tersebut, dan hanya dapat digunakan di dalam fungsi tersebut.
  Variabel lokal tidak dapat digunakan di luar fungsi tempat variabel tersebut berada. Jika Anda mencoba mengaksesnya di luar fungsi, akan terjadi kesalahan.
  
  Cakupan Global : Variabel yang dibuat di luar suatu fungsi disebut variabel global dan termasuk dalam cakupan global.
  Variabel global tersedia dari dalam cakupan apa pun, global dan lokal.
  
  Kesimpulan :
	Singkatnya, gunakan variabel lokal (dengan nama variabel yang baik) sebanyak mungkin. 
	Ini akan membuat kode Anda lebih mudah dikelola dan lebih mudah dipahami. 
	Namun, Anda mungkin menemukan variabel global saat mengerjakan program C++ yang sudah ada atau saat berkolaborasi dengan orang lain. 
	Oleh karena itu, ada baiknya untuk memahami cara kerja cakupan dan cara menggunakannya secara efektif untuk memastikan kode Anda jelas dan berfungsi.
  */
}


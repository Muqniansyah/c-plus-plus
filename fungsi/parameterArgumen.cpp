#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
//	Contoh berikut memiliki fungsi yang menggunakan stringfname sebagai parameter. 
//Saat fungsi dipanggil, kami meneruskan nama depan, yang digunakan di dalam fungsi untuk mencetak nama lengkap
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  
  return 0;
  
	//  Ketika sebuah parameter dilewatkan ke fungsi, maka itu disebut argumen . 
	//Jadi, dari contoh di atas: fname adalah parameter , while Liam, Jenny dan Anja adalah argumen.
}


#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
	//	Memanggil Fungsi, Untuk memanggil suatu fungsi, tuliskan nama fungsi diikuti oleh dua tanda kurung () dan titik koma;
//Dalam contoh berikut, myFunction()digunakan untuk mencetak teks (tindakan), saat dipanggil
  myFunction();
  
//  Suatu fungsi dapat dipanggil beberapa kali
  myFunction();
  myFunction();
  return 0;
}


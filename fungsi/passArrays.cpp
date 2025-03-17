#include <iostream>  
using namespace std;  

//Melewati Array sebagai Parameter Fungsi
//Anda juga dapat meneruskan array ke suatu fungsi
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  
  return 0;
  
  /*
  Contoh Dijelaskan
	Fungsi ( myFunction) mengambil array sebagai parameternya ( int myNumbers[5]), dan melakukan perulangan melalui elemen-elemen array dengan forloop.
	Ketika fungsi tersebut dipanggil di dalam main(), kita meneruskan myNumbers array, yang akan menampilkan elemen-elemen array.
	Perhatikan bahwa ketika Anda memanggil fungsi tersebut, Anda hanya perlu menggunakan nama array saat meneruskannya sebagai argumen myFunction(myNumbers). 
	Namun, deklarasi array secara lengkap diperlukan dalam parameter fungsi ( int myNumbers[5]).
  */
}  


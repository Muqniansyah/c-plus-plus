#include <iostream>
#include <string>
using namespace std;

int main() {
//	Anda mengakses elemen array dengan merujuk ke nomor indeks di dalam tanda kurung siku []
// ini mengakses nilai elemen pertama dalam mobil
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0] << "\n";
  
//  Untuk mengubah nilai elemen tertentu, lihat nomor indeks
  cars[0] = "Opel";
  cout << cars[0] << "\n"; 
  
//looping melalui array. Anda dapat melakukan pengulangan melalui elemen-elemen array dengan for loop.
	//Contoh berikut menampilkan semua elemen dalam array mobil
  string mobil[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << mobil[i] << "\n";
  }
  
	//Contoh ini menampilkan indeks setiap elemen beserta nilainya
  string mobilMobil[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << mobilMobil[i] << "\n";
  }
  
//Dimungkinkan juga untuk mendeklarasikan array tanpa menentukan elemen saat deklarasi, dan menambahkannya kemudian
  string mobil2[5];
  mobil2[0] = "Volvo";
  mobil2[1] = "BMW";
  mobil2[2] = "Ford";
  mobil2[3] = "Mazda";
  mobil2[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << mobil2[i] << "\n";
  }
  
//Mendapatkan Ukuran Array, Untuk mendapatkan ukuran array, Anda dapat menggunakan sizeof() operator
  int myNumbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNumbers) << "\n";
  
  /*
  Mengapa hasilnya 20 malah ditampilkan 5, padahal array tersebut berisi 5 elemen? Hal ini karena sizeof()operator mengembalikan ukuran tipe dalam byte .
  Anda belajar dari bab Tipe Data bahwa suatu int tipe biasanya 4 byte, jadi dari contoh di atas, 4 x 5 (4 byte x 5 elemen) = 20 byte .
  Untuk mengetahui berapa banyak elemen yang dimiliki suatu array , Anda harus membagi ukuran array dengan ukuran elemen pertama dalam array :
  */
  
  int myNumbers2[5] = {10, 20, 30, 40, 50};
  int getArrayLength = sizeof(myNumbers2) / sizeof(myNumbers2[0]);
  cout << getArrayLength << "\n";
  
  /*
   kita menuliskan ukuran array dalam kondisi loop ( i < 5). Ini tidak ideal, karena hanya akan berfungsi untuk array dengan ukuran tertentu.
   Namun, dengan menggunakan sizeof() pendekatan dari contoh di atas, kita sekarang dapat membuat loop yang berfungsi untuk array dengan ukuran apa pun, yang lebih berkelanjutan.
  */
  
  int myNumbers3[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < sizeof(myNumbers3) / sizeof(myNumbers3[0]); i++) {
    cout << myNumbers3[i] << "\n";
  }
  
  return 0;
}


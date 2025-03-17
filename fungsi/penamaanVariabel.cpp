#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {  
  cout << ++x << "\n"; // Tambahkan nilai x sebanyak 1 dan cetaklah
}

int main() {
  myFunction();
  
  // berubah jadi 6 karna sebelumnya kita menjalankan fungsi myFunction()
  cout << x;  // Cetak variabel global x
  
  return 0;
  
  /*
  	Namun, Anda harus menghindari penggunaan nama variabel yang sama untuk variabel global dan lokal karena dapat menimbulkan kesalahan dan kebingungan.
	Secara umum, Anda harus berhati-hati dengan variabel global, karena variabel tersebut dapat diakses dan dimodifikasi dari fungsi apa pun
  */
}


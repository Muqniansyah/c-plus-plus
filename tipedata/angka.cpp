#include <iostream>
using namespace std;
 
int main () {
	// Gunakan int saat Anda perlu menyimpan bilangan bulat tanpa desimal, seperti 35 atau 1000
	// float atau double saat Anda memerlukan bilangan floating point (dengan desimal), seperti 9,99 atau 3,14515.
  int myNum = 1000;
  cout << myNum << "\n";
  
  float myNum2 = 5.75;
  cout << myNum2 << "\n";
  
  double myNum3 = 19.99;
  cout << myNum3 << "\n";
  
    // Angka floating point juga bisa berupa angka ilmiah dengan "e" untuk menunjukkan pangkat 10
  float f1 = 35e3;
  double d1 = 12E4;
  cout << f1 << "\n";
  cout << d1 << "\n";
  
  return 0;
}


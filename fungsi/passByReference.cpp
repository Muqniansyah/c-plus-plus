#include <iostream>
using namespace std;

/*
  	Pada contoh dari halaman sebelumnya, kami menggunakan variabel normal saat kami meneruskan parameter ke suatu fungsi. 
  	Anda juga dapat meneruskan referensi ke fungsi tersebut. Ini dapat berguna saat Anda perlu mengubah nilai argumen
*/
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
//	Melewati bilangan bulat dengan referensi
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}


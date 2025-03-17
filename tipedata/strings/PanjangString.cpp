#include <iostream>
#include <string>
using namespace std;

int main() {
	// Untuk mendapatkan panjang string, gunakan length() fungsi
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "Panjang string txt adalah: " << txt.length() << "\n";
  
	//  Anda mungkin melihat beberapa program C++ yang menggunakan size() fungsi ini untuk mendapatkan panjang string. 
	// Ini hanyalah alias dari length(). Terserah Anda jika ingin menggunakan length() atau size()
	
	// contoh menggunakan size()
  string txt2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "Panjang string txt2 adalah: " << txt2.size();
	
  return 0;
}

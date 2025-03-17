#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
//	Anda mungkin melihat beberapa program C++ yang berjalan tanpa pustaka namespace standar. 
// using namespace std Baris tersebut dapat dihilangkan dan diganti dengan std kata kunci, diikuti oleh :: operator for string(dan cout) objek
  std::string greeting = "Hello";
  std::cout << greeting;
  
	//  Terserah Anda apakah ingin menyertakan pustaka namespace standar atau tidak.

  return 0;
}

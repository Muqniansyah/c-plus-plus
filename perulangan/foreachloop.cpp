#include <iostream>
using namespace std;

int main() {
  // contoh foreach loop
//C++ hanya mendukung range-based for loop mulai dari C++11 ke atas. Jika kamu menggunakan compiler yang lebih lama atau tidak mengaktifkan fitur C++11, kode ini tidak akan berfungsi.
	// Create an array of integers
  int myNumbers[5] = {10, 20, 30, 40, 50};
  
  	// Loop through integers
  for (int a : myNumbers) {
    cout << a << "\n";
  }

  return 0;
}


#include <iostream>
using namespace std;

int main() {
//	contoh for loop
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
  
// contoh nested loop (loop bersarang)
	// lingkaran luar
  for (int i = 1; i <= 2; ++i) {
    cout << "luar: " << i << "\n";  // Executes 2 times
    
    // lingkaran dalam
    for (int j = 1; j <= 3; ++j) {
      cout << " dalam: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  

//break for loop
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  
//continue for loop
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }
  
  return 0;
}

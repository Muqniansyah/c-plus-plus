#include <iostream>
#include <string>
using namespace std;

int main() {
//	Ubah Nilai Pointer
	//	Anda juga dapat mengubah nilai pointer. Namun perlu diingat bahwa ini juga akan mengubah nilai variabel asli
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}


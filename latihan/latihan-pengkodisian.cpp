#include <iostream>
using namespace std;

int main() {
//	Cari tahu apakah suatu angka genap atau ganjil
  int myNum = 5;

  if (myNum % 2 == 0) {
    cout << myNum << " is even.\n";
  } else {
    cout << myNum << " is odd.\n";
  }

  return 0;
}


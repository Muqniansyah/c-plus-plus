#include <iostream>
using namespace std;

int main() {
//	Output "Cukup umur untuk memilih!" jika myAgelebih besar dari atau sama dengan 18 . Jika tidak, output "Tidak cukup umur untuk memilih."
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    cout << "Cukup umur untuk memilih!";
  } else {
    cout << "Belum cukup umur untuk memilih.";
  }
  return 0;
}

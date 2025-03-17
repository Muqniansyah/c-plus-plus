#include <iostream>
using namespace std;

int main() {
//	Anda juga dapat menggunakan throwkata kunci untuk mengeluarkan nomor referensi, seperti nomor/kode kesalahan khusus untuk tujuan pengorganisasian ( 505dalam contoh kami)
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;  
  }
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
  
 /*
 Contoh dijelaskan
	Kita menggunakan tryblok untuk menguji beberapa kode: Jika agevariabelnya kurang dari 18, kita akan throwmembuat pengecualian dan menanganinya dalam catchblok kita.
	Di catchblok tersebut, kita menangkap kesalahan dan melakukan sesuatu untuk mengatasinya. catch Pernyataan tersebut mengambil parameter : dalam contoh kita, kita menggunakan intvariabel ( myNum) (karena kita melempar pengecualian bertipe intdi tryblok ( age)), untuk mengeluarkan nilai age.
	Jika tidak terjadi kesalahan (misalnya jika ageadalah 20bukan 15, berarti akan lebih besar dari 18), catch blok akan dilewati
 */
}


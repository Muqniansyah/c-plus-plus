#include <iostream>
using namespace std;

int main() {
  //contoh variabel int
  int myNum = 15;
  cout << myNum << "\n";
  
  //Anda juga dapat mendeklarasikan variabel tanpa menetapkan nilainya, dan menetapkan nilainya nanti
  int data;
  data = 13;
  cout << data << "\n";
  
  // Perlu diingat bahwa jika Anda menetapkan nilai baru ke variabel yang sudah ada, nilai tersebut akan menimpa nilai sebelumnya
  int angka = 2;
  angka = 3;
  cout << angka << "\n";
  	
  // contoh tipe data lainnya
  int integer = 5;               // Integer (bilangan bulat tanpa desimal)
  cout << "contoh integer : " << integer << "\n";
  double myFloatNum = 5.99;    // Floating point number (dengan desimal)
  cout << "contoh double : " << myFloatNum << "\n";
  char myLetter = 'D';         // Character
  cout << "contoh character : " << myLetter << "\n";
  string myText = "Hello";     // String (text)
  cout << "contoh string : " << myText << "\n";
  bool myBoolean = true;       // Boolean (true or false)
  cout << "contoh boolean : " << myBoolean << "\n";
  
  return 0;
}

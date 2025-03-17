#include <iostream>
#include <string>
using namespace std;

//Beberapa Parameter
//Di dalam fungsi, Anda dapat menambahkan parameter sebanyak yang Anda inginkan
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  
  return 0;
  
//  Perhatikan bahwa ketika Anda bekerja dengan beberapa parameter, pemanggilan fungsi harus memiliki jumlah argumen yang sama dengan jumlah parameter, 
//  dan argumen harus diteruskan dalam urutan yang sama.
}


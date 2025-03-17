#include <iostream>
#include <string>
using namespace std;

//Nilai Parameter Default
//Anda juga dapat menggunakan nilai parameter default, dengan menggunakan tanda sama dengan ( =).
void myFunction(string country = "Brazil") {
  cout << country << "\n";
}

int main() {
//	Jika kita memanggil fungsi tersebut tanpa argumen, ia menggunakan nilai default ("Brazil")
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  
  return 0;
  
//  Parameter dengan nilai default, sering dikenal sebagai " parameter opsional ". 
//Dari contoh di atas, country merupakan parameter opsional dan "Brazil" merupakan nilai default.
}


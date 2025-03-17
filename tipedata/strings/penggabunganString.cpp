#include <iostream>
#include <string>
using namespace std;
 
int main () {
	// Operator ini + dapat digunakan di antara string untuk menambahkannya bersama-sama guna membuat string baru. Ini disebut penggabungan
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  cout << "\n";
  
	//  String dalam C++ sebenarnya adalah sebuah objek, yang berisi fungsi-fungsi yang dapat melakukan operasi-operasi tertentu pada string. 
	// Misalnya, Anda juga dapat menggabungkan string dengan append()fungsi
  string firstName2 = "Muqniansyah ";
  string lastName2 = "Arifin";
  string fullName2 = firstName2.append(lastName2);
  cout << fullName2;
  
  return 0;
}


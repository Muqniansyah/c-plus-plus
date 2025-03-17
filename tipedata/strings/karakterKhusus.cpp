#include <iostream>
using namespace std;

int main() {
//	Karakter escape garis miring terbalik ( \) mengubah karakter khusus menjadi karakter string

	//	Single quote (\')
  string txt = "It\'s alright.";
  cout << txt << "\n";
  
	//  Double quote (\")
  string txt2 = "Kami disebut \"Viking\" dari utara.";
  cout << txt2 << "\n";
  
	//  Backslash (\\)
  string txt3 = "Karakter \\ disebut garis miring terbalik.";
  cout << txt3 << "\n";	
  
	//  New Line (\n)	
  string txt4 = "Hello\nWorld!";
  cout << txt4 << "\n";	
  
	//  Tab (\t)
  string txt5 = "Hello\tWorld!";
  cout << txt5;
  
  return 0;
}

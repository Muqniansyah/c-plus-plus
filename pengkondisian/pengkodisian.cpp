#include <iostream>
#include <string>
using namespace std;

int main() {
	//	contoh if
  if (20 > 18) {
    cout << "20 is greater than 18";
  }  
  
	// contoh else
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
	// contoh else if
  int waktu = 22;
  if (waktu < 10) {
    cout << "Good morning.";
  } else if (waktu < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
	//  shorthand if else (ternary operator)
  int time2 = 20;
  string result = (time2 < 18) ? "Good day." : "Good evening.";
  cout << result;
  
  return 0;
}


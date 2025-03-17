#include <iostream>
using namespace std;

int main() {
  // Bila Anda tidak ingin orang lain (atau diri Anda sendiri) mengubah nilai variabel yang ada, gunakan kata kunci const
  // (ini akan mendeklarasikan variabel sebagai "konstan", yang berarti tidak dapat diubah dan hanya dapat dibaca)
  // Anda harus selalu mendeklarasikan variabel sebagai konstanta bila Anda memiliki nilai yang tidak mungkin berubah
  const int minutesPerHour = 60;
  const float PI = 3.14;
  
  cout << minutesPerHour << "\n";
  cout << PI;
  
  return 0;
}


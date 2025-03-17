#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
//	Daripada mendefinisikan dua fungsi yang seharusnya melakukan hal yang sama, lebih baik membebani salah satunya.
//	Pada contoh di bawah ini, kami membebani plusFuncfungsi agar berfungsi untuk keduanya int dan double
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  
  return 0;
//  Catatan: Beberapa fungsi dapat memiliki nama yang sama selama jumlah dan/atau jenis parameternya berbeda.
}


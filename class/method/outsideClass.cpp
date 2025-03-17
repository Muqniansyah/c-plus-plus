#include <iostream>
using namespace std;

//Contoh class luar
class MyClass {         // The class
  public:               // Access specifier
    void myMethod();    // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  
  return 0;
  
  /*
  Untuk mendefinisikan suatu fungsi di luar definisi kelas, Anda harus mendeklarasikannya di dalam kelas dan kemudian mendefinisikannya di luar kelas. 
  Hal ini dilakukan dengan menentukan nama kelas, diikuti ::operator resolusi cakupan, diikuti dengan nama fungsi
  */
}


#include <iostream>
using namespace std;

//Suatu kelas juga dapat diturunkan dari lebih dari satu kelas dasar, dengan menggunakan daftar yang dipisahkan dengan koma

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  
  return 0;
}


#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  
  return 0;
  /*
  	Pewarisan Bertingkat
	Suatu kelas juga dapat diturunkan dari satu kelas, yang sudah diturunkan dari kelas lain.
	Dalam contoh berikut, MyGrandChildditurunkan dari kelas MyChild(yang diturunkan dari MyClass).
	*/
}


#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  
  return 0;
  
  /*
  Anda telah mempelajari dari bab Access Specifiers bahwa ada tiga specifier yang tersedia dalam C++. Hingga saat ini, kita hanya menggunakan public(anggota kelas dapat diakses dari luar kelas) dan private(anggota hanya dapat diakses di dalam kelas). 
  Specifier ketiga, protected, mirip dengan private, tetapi juga dapat diakses di kelas yang diwarisi
  */
}


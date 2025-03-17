#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called cars that will store strings
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Add new elements
  cars.insert("Tesla");
  cars.insert("VW");
  cars.insert("Toyota");
  cars.insert("Audi");

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}


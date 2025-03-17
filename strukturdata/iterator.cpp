#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  
  // Create a vector iterator called it
  vector<string>::iterator it;
  
  // Point to the first element in the vector
  it = cars.begin();

  // Print the first element in the vector
  cout << *it;
  
  return 0;
}


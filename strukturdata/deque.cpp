#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the first element
  cout << cars[0] << "\n";  // Outputs Volvo

  // Get the second element
  cout << cars[1] << "\n";  // Outputs BMW
  return 0;
}


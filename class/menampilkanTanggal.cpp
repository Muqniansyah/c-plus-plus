#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main () {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);

  cout << asctime(&datetime);
  return 0;
}

// Note: This example displays the server's local time, which may differ from your local time.


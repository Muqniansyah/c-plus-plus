#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main () {
//	Menampilkan Tanggal dan Waktu Saat Ini
//	Pustaka <ctime>memiliki berbagai fungsi untuk mengukur tanggal dan waktu.
// 	Fungsi ini time()memberi kita cap waktu yang mewakili tanggal dan waktu saat ini. Kita dapat menggunakan ctime() fungsi ini untuk menunjukkan tanggal dan waktu yang diwakili oleh cap waktu
  
  // Get the timestamp for the current date and time
  time_t timestamp;
  time(&timestamp);

  // Display the date and time represented by the timestamp
  cout << ctime(&timestamp);
  return 0;
}

// Note: This example displays the server's local time, which may differ from your local time.


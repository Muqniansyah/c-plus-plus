#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Untuk membuat berkas, gunakan atau ofstreamclass fstream, dan tentukan nama berkasnya.
	// Untuk menulis ke berkas, gunakan operator penyisipan ( <<).

  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
  
  
	//Mengapa kita menutup berkas tersebut? Ini dianggap praktik yang baik, dan dapat membersihkan ruang memori yang tidak diperlukan.
}

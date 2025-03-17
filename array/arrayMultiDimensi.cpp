#include <iostream>
using namespace std;

int main() {
//	Mengakses Elemen Array Multi-Dimensi
//Untuk mengakses elemen array multidimensi, tentukan nomor indeks di setiap dimensi array. Pernyataan ini mengakses nilai elemen di baris pertama (0) dan kolom ketiga (2) dari array huruf .
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2] << "\n";
  
//  Mengubah Elemen dalam Array Multi-Dimensi
//Untuk mengubah nilai suatu elemen, lihat nomor indeks elemen di setiap dimensi:
  string letters2[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters2[0][0] = "Z";
  
  cout << letters2[0][0] << "\n";
  
//  Loop Melalui Array Multi-Dimensi
//Untuk melakukan perulangan pada array multidimensi, Anda memerlukan satu perulangan untuk setiap dimensi array. Contoh berikut menampilkan semua elemen dalam array huruf :
  string letters3[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters3[i][j] << "\n";
    }
  }

//Contoh ini menunjukkan cara melakukan perulangan melalui array tiga dimensi
  string letters4[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters4[i][j][k] << "\n";
      }
    }
  }
  
//noted :Indeks array dimulai dengan 0: [0] adalah elemen pertama. [1] adalah elemen kedua, dan seterusnya.
  return 0;
}


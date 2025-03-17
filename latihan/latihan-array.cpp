#include <iostream>
#include <iomanip>  // Untuk setprecision

using namespace std;

int main() {
//	program yang menghitung rata-rata usia yang berbeda
    // Array yang menyimpan berbagai usia
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    // Variabel untuk menghitung rata-rata
    float avg, sum = 0;
    int length = sizeof(ages) / sizeof(ages[0]);  // Menghitung panjang array

    // Menggunakan loop biasa untuk menjumlahkan elemen
    for (int i = 0; i < length; i++) {
        sum += ages[i];
    }

    // Hitung rata-rata
    avg = sum / length;

    // Cetak rata-rata dengan 2 angka desimal
	//  Menambahkan setprecision(2) agar hasil lebih presisi.
    cout << fixed << setprecision(2);
    cout << "The average age is: " << avg << "\n";

    return 0;
}


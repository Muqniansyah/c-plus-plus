#include <iostream>
using namespace std;

/*
Menjumlahkan dua angka mudah dilakukan, tetapi menjumlahkan sejumlah angka lebih rumit. 
Dalam contoh berikut, rekursi digunakan untuk menjumlahkan sejumlah angka dengan memecahnya menjadi tugas sederhana yaitu menjumlahkan dua angka
*/
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  
  return 0;
  
  /*
  Rekursi adalah teknik memanggil fungsi itu sendiri. Teknik ini menyediakan cara untuk memecah masalah rumit menjadi masalah sederhana yang lebih mudah dipecahkan.
  Rekursi mungkin agak sulit dipahami. Cara terbaik untuk mengetahui cara kerjanya adalah dengan bereksperimen.
  
  Contoh Dijelaskan :
	Ketika sum()fungsi dipanggil, fungsi tersebut menambahkan parameter kke jumlah semua angka yang lebih kecil dari kdan mengembalikan hasilnya. 
	Ketika k menjadi 0, fungsi tersebut hanya mengembalikan 0. Ketika dijalankan, program mengikuti langkah-langkah berikut.
	10 + jumlah(9)
	10 + ( 9 + jumlah(8) )
	10 + ( 9 + ( 8 + jumlah(7) ) )
	...
	10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + jumlah(0)
	10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
	Karena fungsi tidak memanggil dirinya sendiri saat k bernilai 0, program berhenti di situ dan mengembalikan hasilnya.
	
	Pengembang harus sangat berhati-hati dengan rekursi karena sangat mudah untuk tergelincir ke dalam penulisan fungsi yang tidak pernah berakhir, 
	atau fungsi yang menggunakan memori atau daya prosesor yang berlebihan. Namun, jika ditulis dengan benar, 
	rekursi dapat menjadi pendekatan pemrograman yang sangat efisien dan elegan secara matematis.
  */
}


#include <iostream>
using namespace std;

int main() {
//	Gunakan switch pernyataan untuk memilih satu dari banyak blok kode yang akan dieksekusi
  int day = 4;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
  
  cout << "\n";
  
//  Kata kunci tersebut defaultmenentukan beberapa kode untuk dijalankan jika tidak ada kecocokan huruf besar/kecil
  int hari = 4;
  switch (hari) {
    case 6:
      cout << "Today is Saturday";
      break;
    case 7:
      cout << "Today is Sunday";
      break;
    default:
      cout << "Looking forward to the Weekend";
  }
  
  
  /*
  	Beginilah cara kerjanya:
		- Ekspresi switchdievaluasi sekali
		- Nilai ekspresi dibandingkan dengan nilai masing-masingcase
		- Jika ada kecocokan, blok kode terkait akan dieksekusi
		- Ketika C++ mencapai suatu break kata kunci, ia keluar dari blok switch. Ini akan menghentikan eksekusi lebih lanjut kode dan pengujian kasus di dalam blok.
		  Bila kecocokan ditemukan dan pekerjaan selesai, saatnya untuk istirahat. Tidak perlu pengujian lebih lanjut.
		  Sebuah break dapat menghemat banyak waktu eksekusi karena ia "mengabaikan" eksekusi semua kode lainnya di blok switch.
  */
  
  return 0;
}


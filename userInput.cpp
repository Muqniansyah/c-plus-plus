#include <iostream>
using namespace std;

int main() {
	// cin adalah variabel yang telah ditentukan sebelumnya yang membaca data dari keyboard dengan operator ekstraksi (>>).
	// Dalam contoh berikut, pengguna dapat memasukkan angka, yang disimpan dalam variabel x. Kemudian kita mencetak nilai dari x
	
	int x;
	cout << "Ketikkan nomor : "; // Ketik nomor dan tekan enter
	cin >> x; // Dapatkan masukan pengguna dari keyboard
	cout  << "Nomor Anda adalah : " << x;
	
	return 0;
}

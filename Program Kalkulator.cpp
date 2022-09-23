#include <iostream>
using namespace std;

int main() {

	float a, b, hasil;
	char operasi;

	cout << "Selamat datang di program kalkulator sederhana\n";
	cout << "Silakan masukkan angka yang ingin dioperasikan\n";
	cout << "Masukkan angka pertama : ";
	cin >> a;
	cout << "Masukkan angka kedua : ";
	cin >> b;
	cout << "Pilih operator +, -, *, / : ";
	cin >> operasi;

	if (operasi == '+') {
		hasil = (a + b);
	}
	else if (operasi == '-') {
		hasil = (a - b);
	}
	else if (operasi == '*') {
		hasil = (a * b);
	}
	else if (operasi == '/') {
		hasil = (a / b);

	} cout << a << operasi << b << "=" << hasil << endl;

	return 0;
}


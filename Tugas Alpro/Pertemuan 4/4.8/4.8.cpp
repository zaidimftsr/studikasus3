#include <iostream>
#include <math.h>
using namespace std;

class Penjumlahan{
	public:
		void cetak_jumlah();
	private:
		int a, b, jumlah = 0;
};

void Penjumlahan::cetak_jumlah(){
	cout << "Program menghitung perkalian dengan cara penjumlahan"<<endl;
	cout << "Masukan nilai a : ";
	cin >> a;
	cout << "Masukan nilai b : ";
	cin >> b;
	for(int i=1; i<=abs(b); i++){
		jumlah += a;
	}
	if(b < 0)jumlah = -jumlah;
	cout << a << "x" << b << " = " << jumlah;
}

int main(){
	Penjumlahan x;
	x.cetak_jumlah();
	return 0;
}

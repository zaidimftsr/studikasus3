#include <iostream>
#include<iomanip>
using namespace std;
class Bensin{
	public :
		bensin();
		void pilihan();
		void hitung_uang ();
		void hitung_liter();
	private :
		double uang, liter, tampil;
		char ambil;
		double harga, pertamax, pertalite;
};
Bensin::bensin(){
	harga = 0;
	pertamax = 9000;
	pertalite = 7000;
}
void Bensin::pilihan(){
	cout<<"selamat Datang di SPBU"<<endl;
	cout<<"bali berdasarkan : "<<endl;
	cout<<"a --> pertamax "<<endl;
	cout<<"b --> pertalite "<<endl;
	cout<<"Masukkan pilihan anda = ";
	cin>>ambil;
	if (ambil == 'a' || ambil == 'b'){
		cout<<"beli berdasarkan :"<<endl;
		cout<<"1 -> uang"<<endl;
		cout<<"2 -> Liter"<<endl;
		cout<<"Masukkan pilihan pembelian : ";
		cin>>pil;
		if(pil == '1'){
			hitung_uang();
		}
	else if (pil=='2'){
		hitung_liter();
	}
	else{
		system("cls");
		pilihan();
	}
void bensin::hitung_uang(){
	cout<<"masukkan besarnya uang : ";
	cin>> uang;
	if(ambil == 'a'){
		harga = pertamax;
	}
	else if (ambil == 'b'){
		harga = premium ;
	}
	tampil = uang / harga;
	cout<<"Jumlah bensin yang dibeli : "<<tampil<<" liter"<<endl;
	system ("PAUSE");
	system ("cls");
	pilihan();
	}
void bensin::hitung_liter()){
	cout<<"Masukkan jumlah liter : ";
	cin>> liter;
	if(ambil == 'a'){
		harga = pertamax;
	}
	else if (ambil == 'b'){
		harga = pertalite;
	}
	tampil = harga * liter;
	cout<<"uang yang harus dibayar : Rp"<<tampil <<".00"<<endl;
	system ("PAUSE");
	system ("cls");
	pilihan();
}
int main(int argc, char *argv[])
{
	Bensin x;
	x.pilihan());
	system("PAUSE");
	return 0;
}

	


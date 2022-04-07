#include <iostream>
#include <iomanip>
using namespace std;

class Bensin{
	friend ostream& operator<<(ostream&, const Bensin&);
	friend istream& operator<<(istream&, Bensin&);
	public :
		Bensin ();
		void pilihan();
		void hitung_liter();
		void hitung_uang();
	private :
		double uang, liter, tampil;
		char pil,n;
		char ambil;
		double harga, pertalite, pertamax;
};

Bensin::Bensin(){
	harga =0;
	pertalite = 7000;
	pertamax = 9000;	
}

void Bensin::pilihan(){
	cout<<"********************************************************************************"<<endl;
	cout<<"\t\t\tSELAMAT DATANG DI SPBU SAWAHWARU\t\t\t"<<endl;
    cout<<"********************************************************************************"<<endl;
	cout<<"BBM yang akan dibeli : "<<endl;
	cout<<"a. pertalite "<<endl;
	cout<<"b. pertamax "<<endl;
	cout<<"Masukan pilihan anda = ";
	cin>>ambil;

if (ambil =='a' || ambil =='b')
{
	cout<<"Beli bedasarkan : "<<endl;
	cout<<"1. uang"<<endl;
	cout<<"2. liter"<<endl;
	cout<<"Masukan pilihan pembelian : ";
	cin>>pil;
	if(pil == '1'){
		hitung_uang();
	}
	else if(pil == '2'){
		hitung_liter();
	}
	else{
		system("cls");
		pilihan();	
	}
 } 
system("cls");
pilihan();
}

void Bensin::hitung_uang(){
	cout<<"Masukan besarnya uang : ";
	cin>>uang;
	if(ambil == 'a')
	{
		harga = pertalite;
	}
	else if (ambil == 'b')
	{
		harga = pertamax;
		
	}
	tampil =uang /harga;
	cout<<"Jumlah bensin yang dibeli : "<<tampil<<"liter"<<endl;
	
	system ("PAUSE");
	system("cls");
	pilihan();
}

void Bensin::hitung_liter()
{
	cout<<"Masukan jumlah liter : ";
	cin>>liter;
	if(ambil=='a')
	{
		harga = pertalite;
	}
	else if (ambil == 'b')
	{
		harga = pertamax;
	}
	tampil = harga *liter;
	cout<<"Uang yang harus dibayar : Rp "<<tampil<<endl;
	system("PAUSE");
	system("cls");
	pilihan ();
}
int main (int argc, char *argv[])
{
	Bensin x;
	x.pilihan();
	system("PAUSE");
	return 0;
}

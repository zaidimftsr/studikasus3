#include<iostream>
#include<conio.h>
using namespace std;

class tabungan{
	friend ostream& operator<<(ostream&, const tabungan&);
	friend istream& operator>>(istream&, tabungan&);
private :
	int pil,rek;
	long a,b,jmlh;
public :
	tabungan();
	void terbilang();
	void satuan();	
};

tabungan::tabungan(){
	system("color 3");
	cout<<"Kelompok 05 B"<<endl;
}

void satuan (long a){
	if (a==1) {
	cout<<"satu";
	}
	else if (a==2) {
	cout<<"dua";
	}
	else if (a==3){
	cout<<"tiga";
	}
	else if (a==4){
	cout<<"empat";
	}
	else if (a==5){
	cout<<"lima";
	}
	else if (a==6){
	cout<<"enam";
	}
	else if (a==7){
	cout<<"tujuh";
	}
	else if (a==8){
	cout<<"delapan";
	}
	else if (a==9){
	cout<<"sembilan";
	}
	else if (a==10){
	cout<<"sepuluh";
	}
	else if (a==11){
	cout<<"sebelas";
	}
}
void ejaan (long b){
	if (b<=11) {
		satuan(b);
	}
	else if ((b>11) && (b<=19)) {
		ejaan(b%10);
		cout<<"Belas";
	}
	else if ((b<=20)&& (b<=99)){
		ejaan(b/10);
		cout<<"Puluh";
		ejaan(b%10);
	}
	else if ((b>=100)&&(b<=199)){
		cout<<"Seratus";
		ejaan(b%100);
	}
	else if((b>=200)&&(b<=999)){
		ejaan(b/100);
		cout<<"Ratus";
		ejaan(b%100);
	}
	else if ((b>=1000)&&(b<=1999)){
		cout<<"Seribu";
		ejaan(b%1000);
	}
	else if ((b>=2000)&&(b<=9999)){
		ejaan(b/1000);
		cout<<"Ribu";
		ejaan(b%1000);
	}
	else if ((b>=10000)&&(b<=99999)){
		ejaan(b/1000);
		cout<<"Ribu";
		ejaan(b%1000);
	}
	else if ((b>=100000)&&(b<=999999)){
		ejaan(b/1000);
		cout<<"Ribu";
		ejaan(b%1000);
	}
	else if ((b>1000000))
	{
		cout<<"Melebihi Batas Penarikan!!!";
	}
}

ostream& operator<<(ostream& out, const tabungan& keluaran){
	out<<"\tBANK UAD"<<endl;
	out<<"1. PENARIKAN TUNAI"<<endl;
	out<<"2. TRANSFER ANTAR BANK"<<endl;
	out<<"3. KELUAR"<<endl;
}

istream& operator >>(istream& in, tabungan& masuk){
	cout<<"Masukkan pilihan : ";
	cin>>masuk.pil;
	if(masuk.pil==1){
		cout<<"MASUKKAN JUMLAH PENARIKAN : Rp. ";cin>>masuk.jmlh;
		cout<<"\tBANK UAD"<<endl;
		cout<<"Nama             : "<<endl;
		cout<<"Jumlah penarikan : Rp. "<<masuk.jmlh<<endl;
		cout<<"Terbilang        : ";
		ejaan(masuk.jmlh);
	}
	else if(masuk.pil==2){
		cout<<"MASUKKAN REKENING TUJUAN : ";
		cin>>masuk.rek;
		cout<<"Nama            : "<<endl;
		cout<<"Masukkan jumlah : Rp. ";cin>>masuk.jmlh;
		cout<<"\tBANK UAD"<<endl;
		cout<<"Rekening tujuan : "<<masuk.rek<<endl;
		cout<<"Atas nama       : "<<endl;
		cout<<"Terbilang	   : ";
		ejaan(masuk.jmlh);
		cout<<"\nSaldo	   	   : Rp. ";
	}
	else{
		0;
	}
}

int main(){
	tabungan x;
	cout<<x;
	cin>>x;
	getch();
	return 0;
}


#include <iostream>

using namespace std;
int main(){
	int a,b;
	int jumlah,kurang,kali,bagi;
	cout<<"__PROGRAM KALKULATOR SEDERHANA__\n";
	cout<<"Masukkan nilai a: ";
	cin >>a;
	cout<<"Masukkan nilai b: ";
	cin >>b;
	cout<<endl<<endl<<"__ penjumlahan__"<<endl;
	jumlah= a+b;
	cout<<" hasil dari penjumlahan "<<a<<" + "<<b<<"="<<jumlah;
	cout<<endl<<endl<<"__pengurangan__"<<endl;
	kurang= a-b;
	cout<<" hasil dari pengurangan "<<a<<" - "<<b<<"="<<kurang;
	cout<<endl<<endl<<"__perkalian__"<<endl;
	kali= a*b;
	cout<<" hasil dari perkalian "<<a<<" * "<<b<<"="<<kali;
	cout<<endl<<endl<<"__pembagian__"<<endl;
	bagi= a/b;
	cout<<" hasil dari pembagian "<<a<<" / "<<b<<"="<<bagi;
	cin.get();
	
	return 0;
}

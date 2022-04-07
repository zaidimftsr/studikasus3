#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int gpk1,gpk2,grg1,grg2,udg1,udg2,cmg1,cmg2,bkr1,bkr2,hasil1,jrk,okr,okr2,dis,hasil2,byr,kbl,total;
	cout<< "\t\tMENU\t\t" <<endl;
	cout<< "\tPOTACIO DELIVERY" <<endl;
	cout<< "_________________________________________" <<endl;
	cout<< "1. Ayam Geprek\t\t Rp.21.000" <<endl;
	cout<< "2. Ayam Goreng\t\t Rp.17.000" <<endl;
	cout<< "3. Udang Goreng\t\t Rp.19.000" <<endl;
	cout<< "4. Cumi Goreng\t\t Rp.20.000" <<endl;
	cout<< "5. Ayam Bakar\t\t Rp.25.000" <<endl;
	cout<< "_________________________________________" <<endl;
	cout<< "Ayam Geprek: "; cin>>gpk1;
	cout<< "Ayam Goreng : "; cin>>grg1;
	cout<< "Udang Goreng : "; cin>>udg1;
	cout<< "Cumi Goreng : "; cin>>cmg1;
	cout<< "Ayam Bakar : "; cin>>bkr1;
	cout<< "Jarak Resto -> Jarak Pengantaran (dalam km) : "; cin>>jrk;
	gpk2 = 21000 * gpk1;
	grg2 = 17000 * grg1;
	udg2 = 19000 * udg1;
	cmg2 = 20000 * cmg1;
	bkr2 = 25000 * bkr1;
	hasil1 = gpk2 + grg2 + udg2 + cmg2 + bkr2;
	if(jrk <= 3){
		okr = 15000;
		if(hasil1 > 25000){
			okr2 = okr - 3000;
			dis = 0;
			hasil2 = hasil1;
			total = hasil2 + okr2;
		}
		if(hasil1 > 50000){
			okr2 = okr - 5000;
			dis = hasil1 * 15 / 100;
			hasil2 = hasil1 - dis;
			total = hasil2 + okr2;
		}
		if(hasil1 > 150000){
			okr2 = okr - 8000;
			dis = hasil1 * 35 / 100;
			hasil2 = hasil1 - dis;
			total = hasil2 + okr2;
		}
	}
	if(jrk > 3){
		okr = 25000;
		if(hasil1 > 25000){
			okr2 = okr - 3000;
			dis = 0;
			hasil2 = hasil1;
			total = hasil2 + okr2;
		}
		if(hasil1 > 50000){
			okr2 = okr - 5000;
			dis = hasil1 * 15 / 100;
			hasil2 = hasil1 - dis;
			total = hasil2 + okr2;
		}
		if(hasil1 > 150000){
			okr2 = okr - 8000;
			dis = hasil1 * 35 / 100;
			hasil2 = hasil1 - dis;
			total = hasil2 + okr2;
		}
	}
	cout<< "Harga : Rp." <<hasil1 <<endl;
	cout<< "Diskon : Rp."<<dis<<endl;
	cout<< "Ongkir : Rp."<<okr2<<endl;
	cout<< "Total : Rp."<<total<<endl;
	cout<< "Jumlah dibayar : Rp."; cin>>byr;
	kbl = byr - total;
	
	cout<< "\n\t Struk Pembayaran \t\t" <<endl;
	cout<< "____________________________________" <<endl;
	cout<< "1. Ayam Geprek\t\t Rp.21.000 x" <<gpk1 <<endl;
	cout<< "2. Ayam Goreng\t\t Rp.17.000 x" <<grg1 <<endl;
	cout<< "3. Udang Goreng\t\t Rp.19.000 x" <<udg1 <<endl;
	cout<< "4. Cumi Goreng\t\t Rp.20.000 x" <<cmg1 <<endl;
	cout<< "5. Ayam Bakar\t\t Rp.25.000 x" <<bkr1 <<endl;
	cout<< "____________________________________" <<endl;
	cout<< "Harga : \t\t Rp." <<hasil1<<endl;
	cout<< "Diskon : \t\t Rp."<<dis<<endl;
	cout<< "Ongkir : \t\t Rp." <<okr2<<endl;
	cout<< "Total Harga : \t\t Rp." <<total<<endl;
	cout<< "Dibayar : \t\t Rp." <<byr <<endl;
	cout<< "Kembalian : \t\t Rp." <<kbl <<endl;
	return 0;
}

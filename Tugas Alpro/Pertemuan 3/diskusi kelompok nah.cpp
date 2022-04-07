#include <iostream>
#include <conio.h>
using namespace std;

void satuan (long a)
{
	if (a==1) {
		cout<<" satu ";
	}
	else if (a==2) {
		cout<<" dua ";
	}
	else if (a==3) {
		cout<<" tiga ";		
	}
	else if (a==4) {
		cout<<" empat ";
	}
	else if (a==5) {
		cout<<" lima ";
	}
	else if (a==6) {
		cout<<" enam ";
	}
	else if (a==7) {
		cout<<" tujuh ";
	}
	else if (a==8) {
		cout<<" delapan ";
	}
	else if (a==9) {
		cout<<" sembilan ";
	}
	else if (a==10) {
		cout<<" sepuluh ";
	}
	else if (a==11) {
		cout<<" sebelas ";
	}
	}
void terbilang (long b)
{
	if (b<=11){
		satuan (b);
	}
	else if ((b>11) && (b<=19)){
		terbilang(b%10);
		cout<<" belas ";
	}
	else if ((b>=20) && (b<=99)){
		terbilang(b/10);
		cout<<" puluh ";
		terbilang(b%10);
	}
	else if ((b>=100) && (b<=199)){
		cout<<" seratus ";
		terbilang(b%100);
	}
	else if ((b>=200) && (b<=999)){
		terbilang(b/100);
		cout<<" ratus ";
		terbilang(b%100);
	}
	else if ((b>=1000) && (b<=1999)){
		cout<<" seribu ";
		terbilang(b%1000);
	}
	else if ((b>=10000) && (b<=999999)){
		terbilang(b/1000);
		cout<<" ribu ";
		terbilang(b%1000);
	}
	else if ((b>100000))
	{
		cout<<" maaf bro angkanya besar betul nda sanggup aku eh! ";
	}
	}
	int main ()
	{
	int nilai;
	
	cout <<"\nMasukkan bilangan :";cin>>nilai;
	if (nilai<0){
		cout<<"Minus";
		terbilang(nilai);
	} else {
		terbilang (nilai);
	}
	getch ();
	}

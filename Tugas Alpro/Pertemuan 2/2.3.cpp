#include <iostream>
using namespace std;

int main()
{
	float m,cm,inci;
	
	cout<<"Konversi ukuran dari Meter ke CM dan Inci"<<endl;
	cout<<"Masukkan M : ";
	cin>>m;
	cout<<endl;
	cm = m*100;
	inci = m*39;
	
	cout<<"Hasil Konversi Dari "<<m<<"Meter ke CM Adalah "<<cm<<"CM"<<endl;
	
	cout<<"Hasil Konversi Dari "<<m<<"Meter ke Inci Adalah "<<inci<<"Inci"<<endl;
}

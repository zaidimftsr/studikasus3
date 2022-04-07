#include<iostream>

using namespace std;

class Rata_rata{
	public:
		void rata_rata(){
			cout<<"Banyaknya data: "; 
			cin>>n;
			for(i = 1; i <= n; i++){
				cout<<"data ke -"<<i<<" :";	
				cin>>x;
				jumlah+=x;
			}
			rata=jumlah/n;
			cout<<"Rata rata = "<<rata;
		}
	private:
		int jumlah=0;
		int i,n,x;
		float rata;
};

int main(){
	Rata_rata x;
	x.rata_rata();
}

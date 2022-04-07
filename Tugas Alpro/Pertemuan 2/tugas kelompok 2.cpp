#include <iostream>
using namespace std;

struct titik{
	float x, y;
};

int main (){
	titik t1, t2, tt;
	
	cout << "Masukkan T1 x : "; cin >> t1.x;
	cout << "Masukkan T1 y : "; cin >> t1.y;
	cout << "Masukkan T2 x : "; cin >> t2.x;
	cout << "Masukkan T2 y : "; cin >> t2.y;
	
	tt.x = (t1.x + t2.x) / 2;
	tt.y = (t1.y + t2.y) / 2;
	
	cout <<"Titik Tengah di x = "<< tt.x <<endl;
	cout <<"Titik Tengah di y = "<< tt.y <<endl;
	
	return 0;
}

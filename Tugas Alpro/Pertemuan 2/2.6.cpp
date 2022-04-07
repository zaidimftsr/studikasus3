#include <iostream>
using namespace std;
int main ()
{
	int m, n, q, r;
	
	cout<<"Masukkan nilai m (n<m) : ";
	cin>>m;
	cout<< "Masukkan nilai n (n<m) : ";
	cin>>n;
	
	q = m/n;
	r = m%n;
	cout<<"Nilai kuosen : "<<q<<endl;
	cout<<"Nilai Residu : "<<r<<endl;
	cout<< m << " = " << q << "x" << n << "+" << r <<endl;
	
return 0;
}

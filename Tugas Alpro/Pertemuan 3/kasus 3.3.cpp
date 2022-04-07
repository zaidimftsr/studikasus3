#include <iostream>
#include <math.h>

using namespace std;

class akar{
	public :
		akar(){
		cout << "masukan nilai 1 : ";
			cin >> a;
			cout << "masukan nilai 2 : ";
			cin >> b;
			cout << "masukan nilai 3 : ";
			cin >> c;
			disk = b*b - 4*a*c;
		
	if (a == 0){
		cout << "bukan persamaan kuadrat\n";
		cout << "harga akar " << -b/c;
	}
	else{
		disk = b*b - 4*a*c;
		if(disk > 0){
			x1 = -b + sqrt(disk) / (2*a);
	        x2 = -b - sqrt(disk) / (2*a);
	        cout << "diskriminan = " << disk << endl;
	        cout << "x1 = " << x1 << endl;
	        cout << "x2 = " << x2 << endl;
		}
		else if (disk == 0){
			x1 = -b/(2*a);
			x1 = x2;
			cout << "diskriminan = 0\n";
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
			
		}
		else
			cout << "akar imajiner";
		
	}
	}		
	private :
		int a,b,c;
		float x1,x2; 
		long disk;
};

int main(){
	akar x;
	
	
	return 0;
}


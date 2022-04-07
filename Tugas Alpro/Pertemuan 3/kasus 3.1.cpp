#include <iostream>

using namespace std;

class perbandingan {
	friend istream& operator >> (istream&, perbandingan&);
	
public :
	perbandingan(){
		cout << "masukan nilai a dan b : ";
		cin >> a >> b;
	};
	void bandingkan(){
		if (a > b){
			cout << "bilangan terbesar : " << a;
		}
		else if (a = b){
			cout << "bilangan sama besar";
		}
		else{
			cout << "bilangan terbesar : " << b;
		}
		
	}
private:
	int a,b;
};

int main(){
	perbandingan x;
	x.bandingkan();
	
return 0;
}

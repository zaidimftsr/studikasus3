#include<iostream>
using namespace std;
class doWhile{
	public:
		void mencetak();
	private:
		int i;
};

void doWhile::mencetak(){
    i=1;
	do{
		cout<<" "<<i;
		i++;
	}
	while(i <= 4);
}

main(){
	doWhile x;
	x.mencetak();
}

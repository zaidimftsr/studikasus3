#include<iostream>
using namespace std;
class While{
	public:
		void mencetak();
	private:
		int i;
};

void While::mencetak(){
	i=1;
	while(i <= 4){
		cout<<" "<<i;
		i++;
	}
}

main(){
	While x;
	x.mencetak();
}

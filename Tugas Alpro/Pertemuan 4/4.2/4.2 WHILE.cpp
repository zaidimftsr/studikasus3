#include <iostream>

using namespace std;

class While{
	public:
		void mencetak();
	private:
		int i;
};

void While::mencetak(){
	i=1;
	while(i <= 10){
		if(i % 2 == 1)
		cout<<i<<endl;
		i++;
	}
}

main(){
	While x;
	x.mencetak();
}

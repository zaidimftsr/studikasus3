#include <iostream>
#include <string>
using namespace std;
class KASUS{
    public: void input ();
            void proses_output();
            
    private: int hasil;
               int x;
               int y;
               int i;
};
void KASUS:: input(){
   cout<<"menghitung nilai dari x pangkat y dengan x bilangan real dan y bilangan bulat "<<endl;
   cout << "masukkan angka : " ;
   cin >> x;
   cout <<"masukkan pangkatnya : ";
   cin >> y;
}
void KASUS:: proses_output(){
     i =1;
   hasil =1;
   while (1)
   {
      hasil =hasil*x;
      if (i==y) break;
      i =i+1;
   }
   cout << "hasil "<<x <<" pangkat "<<y<<" = "<<hasil << endl;
}
int main()
{ KASUS t;
t.input();
t.proses_output();
    return 0;
}


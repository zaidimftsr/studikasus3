#include <iostream>

using namespace std;

class Penilaian{
    private:
        int nilaiAngka;
        char nilaiHuruf;

    public:
        void inputNilaiAngka(){
            cout << "Masukkan nilai Anda : ";
            cin >> nilaiAngka;
        }

        void outputNilaiHuruf(){
            if(nilaiAngka>=81 && nilaiAngka<=100){
                nilaiHuruf = 'A';
            }else if(nilaiAngka>=61 && nilaiAngka<=80){
                nilaiHuruf = 'B';
            }else if(nilaiAngka>=41 && nilaiAngka<=60){
                nilaiHuruf = 'C';
            }else if(nilaiAngka>=21 && nilaiAngka<=40){
                nilaiHuruf = 'D';
            }else if(nilaiAngka>=0 && nilaiAngka<=20){
                nilaiHuruf = 'E';
            }else{
                nilaiHuruf = '?';
            }

            cout << "Nilai Anda : " << nilaiHuruf << endl;
        }
};

int main(){
    Penilaian penilaian;

    penilaian.inputNilaiAngka();
    penilaian.outputNilaiHuruf();

    return 0;
}

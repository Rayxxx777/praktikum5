#PRAKTIKUM5

1) memasukan beberapa angka secara acak , dan akan terPILIH bilangan terbesar setelah diINPUTkan angka " 0 " , (inputan akan berenti dan memilih bilangan terbesar saat bilangan terakhir diinputkan bilangan 0


#include <iostream>

using namespace std;

int main (){
	int a,max=0;
do {
	cout<< "input a :" ;
	cin >> a;

		if (max<a){
		max=-0;


	}
}
	while (a!=0);
	(max=0);

	return 0;





}

![Alt text](https://github.com/Rayxxx777/praktikum5/blob/master/praktikum5.png)




2) menyetak kata BENAR atau SALAH dari sebuah hitungan atau perbandingan 3 buah bilangan yang dimasukan  ( jika bilangan pertama + bilangan kedua = bilangan ketiga maka print "BENAR" atau jika bukan maka "SALAH" )


#include <iostream>

using namespace std;

int main(){
int a,b,c,hasil;

    cout<< "input bilangan A :";
    cin>>a;
    cout<< "input bilangan B :";
    cin>>b;
    cout<< "input bilangan C :";
    cin>>c;


    if(a+b==c){
        cout<< " benar ";
        }
        else if (a+c==b){
            cout<< " benar ";
        }
        else if (b+c==a){
            cout<< " benar ";
        }

        else{
        cout<< " SALAH : ";
        }


    }

![Alt text](https://github.com/Rayxxx777/praktikum5/blob/master/no2.png)

![Alt text](https://github.com/Rayxxx777/praktikum5/blob/master/no22.png)
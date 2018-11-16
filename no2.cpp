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


#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a : "; cin>>a;
	switch(a){
		case 1 ... 5: cout<<"1-5"; break;   //tanpa break akan lanjut sampai bawah
		case 6 ... 10: cout<<"6-10"; break;		//tipe data yang bisa digunakan oleh case hanya char dan int
			//misalnya tipe data (char a;) maka di case tulisnya (case'a')
	}
}

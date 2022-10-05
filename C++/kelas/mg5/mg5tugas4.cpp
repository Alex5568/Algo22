#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a : "; cin>>a;
	switch(a){
		case 1: cout<<"satu"; break;   //tanpa break akan lanjut sampai bawah
		case 2: cout<<"dua"; break;		//tipe data yang bisa digunakan oleh case hanya char dan int
		default: cout<<"not 1 or 2";	//misalnya tipe data (char a;) maka di case tulisnya (case'a')
	}
}

#include <iostream>
using namespace std;

int main (){
	char jawab;
	int angka1, angka2, hasil;
	
	do{
		cout<<"Masukkan angka pertama : "; cin>>angka1;
		cout<<"Masukkan angka kedua : "; cin>>angka2;
		hasil = angka1 + angka2;
		cout<<"Hasil penjumlahan adalah "<<hasil;
		cout<<endl<<"coba lagi (Y/T) ? "; cin >> jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	
	return 0;
}

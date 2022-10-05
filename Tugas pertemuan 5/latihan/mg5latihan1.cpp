#include <iostream>
using namespace std;

int main(){
	string nama;
	float a,b,c;
	int nilai;
	cout<<"Masukkan nama anda: "; cin>>nama;
	cout<<"Nilai tugas: "; cin>>a;
	cout<<"Nilai UTS: "; cin>>b;
	cout<<"Nilai UAS: "; cin>>c;
	nilai = (a+b+c)/3;
	cout<<"--------------------------------"<<endl;
	cout<<"Selamat "<<nama<<endl;
	cout<<"Nilai anda ((tugas+UTS+UAS)/3): "<<nilai<<endl;
	switch (nilai){
		case 81 ... 100:	cout<<"Nilai Huruf: A"<<endl; break;
		case 61 ... 80:	cout<<"Nilai Huruf: B"<<endl; break;
		case 41 ... 60:	cout<<"Nilai Huruf: C"<<endl; break;
		case 21 ... 40:	cout<<"Nilai Huruf: D"<<endl; break;
		case 0 ... 20:	cout<<"Nilai Huruf: E"<<endl; break;
		default:	cout<<"Nilai Invalid"<<endl;
	}	
}

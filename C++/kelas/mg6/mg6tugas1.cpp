#include <iostream>
using namespace std;

int main(){
	int pilihan, jumlah, harga, total;
	
	cout<<"Warung Goreng"<<endl;
	cout<<"-------------"<<endl;
	cout<<"1. Nasi Goreng Rp.15.000"<<endl;
	cout<<"2. Mie Goreng Rp.15.000"<<endl;
	cout<<"3. Kwetiaw Goreng Rp.20.000"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Masukkan pilihan anda: "; cin>>pilihan;
	cout<<"Jumlah pesanan: ", cin>>jumlah;
	cout<<"---------------------------"<<endl;
	cout<<"Menu anda: ";
	switch (pilihan){
		case 1: cout<<"Nasi Goreng"<<endl;
		harga=15000; break;
		case 2: cout<<"Mie Goreng"<<endl;
		harga=15000; break;
		case 3: cout<<"Kwetiaw Goreng"<<endl;
		harga=20000; break;
		default: cout<<"Menu tidak ada"<<endl;
		return 0;
	}
	cout<<"Harga: "<<harga<<endl;
	cout<<"Jumlah pesan: "<<jumlah<<endl;
	total = harga * jumlah;
	cout<<"Total bayar: "<<total<<endl;
}

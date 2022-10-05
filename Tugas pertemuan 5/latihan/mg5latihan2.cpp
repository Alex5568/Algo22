#include <iostream>
using namespace std;

int main(){
	string nama;
	char sarapan;
	int no, lama, harga, total, hargasarapan;
	
	cout<<"Hotel Bahagia"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Masukkan nama anda: "; cin>>nama;
	cout<<"Masukkan jenis kamar (1-4): "; cin>>no;
	cout<<"Lama inap: "; cin>>lama;
	cout<<"Dengan sarapan (y/n) 50rb/hr: "; cin>>sarapan;
	cout<<"--------------------------------"<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	switch (no){
		case 1:	cout<<"Kamar anda VVIP"<<endl; harga=1000000; break;
		case 2:	cout<<"Kamar anda VIP"<<endl; harga=750000; break;
		case 3:	cout<<"Kamar anda Standard"<<endl; harga=500000; break;
		case 4:	cout<<"Kamar anda Melati"<<endl; harga=250000; break;
		default:	cout<<"Jenis kamar tidak ada"<<endl;
		return 0;
	}
	cout<<"Lama menginap "<<lama<<" malam ";
	if (sarapan == 'y' || sarapan == 'Y'){
		cout<<"dengan sarapan"<<endl;
		hargasarapan = 50000;
	}	else{
		cout<<"tanpa sarapan"<<endl;
		hargasarapan = 0;
	}
	total = (lama * hargasarapan)+(lama * harga);
	cout<<"Total bayar: "<<total<<endl;
	
}

#include <iostream>
using namespace std;

int main(){
	int u;
	char lagi;
	atas:		//label, jangan mengunakan nama yang sama dengan variabel
		cout<<"Masukkan Umur: ";
		cin>>u;
		
		cout<<"Umur anda adalah: "<<u<<endl;
		cout<<"Ulang lagi (y/t): ";
		cin>>lagi;
		
		if (lagi == 'y'){
			goto atas;
		}
}

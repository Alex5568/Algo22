#include <iostream>
using namespace std;

int main(){
	string nama; int umur;
	cout<<"Masukkan nama: "; cin>> nama;
	cout<<"Masukkan umur: "; cin>> umur;
	cout<<"--------------------"<<endl;
	cout<<"Terima Kasih "<<nama<<endl;
	(umur > 17) ? cout<<"Anak Dewasa"<<endl :
				  cout<<"Anak Anak"<<endl;
}

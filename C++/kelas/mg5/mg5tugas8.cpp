#include <iostream>
using namespace std;

int main(){
	int n, h, t; cout<<"Kamar: "; cin>>n;
	string k;
	switch(n){
		case 1: k = "VVIP"; h = 1000000;
		  break;
	}
	cout<<"Kamar anda: "<<k<<endl;
	t = 3 * h;
	cout<<"total harga kamar: "<<t<<endl;
}

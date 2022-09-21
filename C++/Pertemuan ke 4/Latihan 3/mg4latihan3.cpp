#include <iostream>
using namespace std;

int main(){
	int uts, uas;
	float n;
	
	cout<<"Masukkan nilai UTS : "; cin>>uts;
	cout<<"Masukkan nilai UAS : "; cin>>uas;
	n = (uts + uas) / 2;
	(n >= 65) ? (cout<<"lulus") : (cout<<"tidak lulus");
}

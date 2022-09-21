#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	int berat;
	
	cout<<"Masukkan ukuran berat badan:"<<endl;
	cin>>berat;
	if(berat <= 70){
		cout<<"Berat badanmu teah mencapai berat badan ideal"<<endl;
	} else {
		cout<<"Turunkan berat badanmu";
	}
	return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	int usia;
	float a, b, c, d, kebutuhan;
	float berat, tinggi;
	string gender, pria, wanita;
	
	cout<<"Gender: pria/wanita"<<endl;
	cin>>gender;
	if(gender==pria, gender!=wanita){
		a = 88.4;
		b = 13.4;
		c = 4.8;
		d = 5.58;
	} else if(gender==wanita, gender!=pria) {
		a = 447.6;
		b = 9.25;
		c = 3.10;
		d = 4.33;
	} else if(gender!=pria, gender!=wanita) {
		cout<<"Gender Invalid"<<endl;
		
		return 0;
	}
		cout<<"berat: ";
		cin>>berat;
		cout<<"tinggi: ";
		cin>>tinggi;
		cout<<"usia: ";
		cin>>usia;
		kebutuhan = a + b * berat + c * tinggi - d * usia;
		cout<<kebutuhan<<endl;
		
		return 0;
}

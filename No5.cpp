#include <iostream>
using namespace std;

int main(){
	int tb,bb;
	float hasil;
	cout << "Masukan Tinggi Badan : ";
	cin >> tb;
	cout << "Masukan Berat Badan : ";
	cin >> bb;
	
	if(bb<tb/2.5){
		cout<<"Anda Underweight";
	}
	else if(tb/2.3<bb){
		cout<<"Anda Overweight";
	}
	else if(tb/2.5<=tb<=tb/2.3){
		cout<<"Anda Normal";
	}
}

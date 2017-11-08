#include <iostream>
using namespace std;

int main(){
	float p,l,a,t,L;
	char bidang;
	cout << "Masukan Huruf Awal Jenis Bidang : ";
	cin >> bidang;
	
	if(bidang == 'P' || bidang == 'p'){
		cout << " Masukan Panjang : ";
		cin >> p;
		cout << " Masukan Lebar : ";
		cin >> l;
		L=p*l;
	}
	else if(bidang == 'S' || bidang == 's'){
		cout << " Masukan Alas : ";
		cin >> a;
		cout << " Masukan Tinggi : ";
		cin >> t;
		L=0.5*(a*t);
	}
		cout << "Luas Bidang : "<<L<<endl;
}

#include <iostream>
using namespace std;

int main(){
	int x,y,hasil;
	
	cout << "Masukan Nilai X : ";
	cin >> x;
	cout << "Masukan Nilai Y : ";
	cin >> y;
	
	if(x>=y){
		hasil=(x-y);
	}
	else{
		hasil=(y-x);
	}
	cout << "Hasil :"<<hasil<<endl;
}

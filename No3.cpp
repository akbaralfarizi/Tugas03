#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int gp,jk,lembur,gt,pajak,gttl;
	cout << "Masukan Gajih pegawai : ";
	cin >> gp;
	cout << "Masukan Jam Kerja : ";
	cin >> jk;
	
	if(jk>40){
	lembur=(jk-40)*(gp/40);
	gt=(lembur*1.5)+gp;
	pajak=gp*0.15;
	gttl=gt-pajak;
	}
	else{
		pajak=gp*0.15;
		gttl=gp-pajak;
	}
}

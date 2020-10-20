#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int main()
 
{
	char ket[10], kode, sisi, y, as;
	int a, t, sm;		// a = alas segitiga		t = tinggi segitiga		sm = sisi miring
	int s1, s2, s3; 	// sisi segitiga
	float luas, kel; 	// kel = keliling
	cout<<" Program Menghitung Sisi miring, luas dan keliling segitiga \n";
	cout<<" ----------------Christopher Juliano W.S.-------------------\n";
	do{
	cout<<"----------------Progam Menghitung Segitiga------------------\n";
	cout<<"\n";
	cout<<" 1. Menghitung Luas Segitiga \n";
	cout<<" 2. Menghitung Panjang SIsi Miring \n";
	cout<<" 3. Menghitung Keliling Segitiga \n";
	cout<<"\n";
	cout<<"-----------------------------------------\n";
	cout<<" Pilih Perhitungan yang akan digunakan : ";
	kode=getche();
	cout<<"\n";
	switch(kode)
	{	
		case '1':		//case 1 adalaha menghitung luas segitiga
			cout<<" Masukan alas segitiga : ";cin>>a;
			cout<<" Masukan tinggi segitiga : ";cin>>t;
			luas = 0.5*a*t;
			cout<<" Luas segitiga adalah "<<luas<<endl;
			break;
		
		case '2':		//case 2 adalah menghitung panjang sisi miring
			cout<<" Masukan alas : ";cin>>a;
			cout<<" Masukan tinggi : ";cin>>t;
			sm = sqrt(pow(a,2)+pow(t,2)); 			//rumus dalam penggunaan untuk pencarian sisi miring
			cout<<" Panjgang sisi miring adalah "<<sm<<endl;
			break;
		
		case '3':		//case 3 adalah menghitung keliling segitiga
			cout<<" Masukan alas : ";cin>>a;
			cout<<" Masukan tinggi : ";cin>>t;
			cout<<" Masukan Sisi miring : ";cin>>sm;
			kel = a+t+sm;
			cout<<" Keliling segitiga adalah "<<kel<<endl;
			break;
		
	}
	
	cout<<"----------------------------------------\n";
	cout<<" Apakah ingin tetap di program? \n";
	cout<<" Ketik [y] untuk Ya || Ketik [N] untuk tidak \n";
	cin>>as; }
	while(as=='Y' || as=='y');
	cout<<"keluar dari program"<<endl;
		exit(0);
	
	getch();
}

#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	char nama[15], gol;
	int jam; 							// jam = waktu kerja karyawan
	long gj, lbr; 						// gj = gaji		lbr = lembur
	cout<<"-------Program Gaji Karyawan---------\n";
	cout<<"------Christopher Juliano W.S.-------\n";
	cout<<"\n";
	cout<<"--------------------------------------\n";
	cout<<" Masukan Nama Karyawan : ";
	cin>>nama;
	cout<<" Masukan Jam Kerja : ";
	cin>>jam;
	cout<<" Pilih Golongan Karyawan [A/B/C/D] : ";
	gol=getche();
	cout<<"\n";
	cout<<"-----------------------------\n";
	lbr=4000;
	int lemburky=0; 	//lemburky : Lembur karyawan
	if(jam>48){
		lemburky=jam-48;
		}
	switch(gol)
	 	{
		case 'A':
				gj = (jam-lemburky)*5000;
				break;
		case 'B':
				gj = (jam-lemburky)*7000;
				break;
		case 'C':
				gj = (jam-lemburky)*8000;
				break;	
		case 'D':
				gj = (jam-lemburky)*10000;
				break;		
		default:
				cout<<"Golongan Karyawan Tidak tersedia"<<endl;
				gj = 0;
				lbr = 0;
				break;
		}
	if(jam>48)
		{
		gj = gj+((jam-48)*lbr);		//menghitung gaji karyawan dengan tambahan lembur
		}
		cout<<" Nama Karyawan	: "<<nama<<endl;
		cout<<" Total gaji	: Rp "<<gj<<endl;
		
		getch();
	return(0);

}

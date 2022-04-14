#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

	/* 
	Gaji Karyawan
	Gapok = Gaji Pokok (4 Golongan) 
	Tunjangan Pengabdian = 4 Golongan
	Lembur = jam Lembur *25000;
	Pajak Gapok = 0.05*Gapok;
	Pajak Lembur = 0.05*Lembur;
	Pajak Total = Pajak Gapok + Pajak Lembur;
	Gaji Bersih = (( Gapok + Tun_Pengabdian+Lembur) - Pajak Total)
	*/

	float pjk_ttl, pjk_gpk, pjk_lmbr;
	string nama;
	int gapok[5], tjpn[5], golongan, ttl_jamlem, jamlem, gj;
	
	cout<<"\n ~~~ Masukan Data Karyawan ~~~ \n\n";
	
	cout<<"Masukkan Nama\t : "; cin >> nama;
	cout<<"Jam Lembur\t : "; cin >> jamlem;
	cout<<"Golongan\t : "; cin >> golongan;

	ttl_jamlem = (jamlem * 25000);	
	
	//0"Magang", 1"Pemula", 2"Junior", 3"Senior"
	
	gapok[0] = 0;
	gapok[1] = 1500000;
	gapok[2] = 2000000;
	gapok[3] = 2500000;
	gapok[4] = 3000000;
	
	tjpn[0] = 0;
	tjpn[1] = 300000;
	tjpn[2] = 400000;
	tjpn[3] = 500000;
	tjpn[4] = 600000;
	
	cout<<"\n ~~~ Struck Gaji Karyawan ~~~ \n\n";

	cout<<"Nama\t\t : "<<nama<<endl;
	cout<<"Golongan\t : "<<golongan<<endl;
	cout<<"Gaji Pokok\t : "<<gapok[golongan]<<endl;
	cout<<"Tj Pengabdian\t : "<<tjpn[golongan]<<endl;
	cout<<"Jam Lembur\t : "<<jamlem<<endl;
	cout<<"Upah Lembur\t : "<<ttl_jamlem<<endl;
	
	pjk_gpk = 0.05 * gapok[golongan];
	pjk_lmbr = 0.05 * ttl_jamlem;
	pjk_ttl = pjk_gpk + pjk_lmbr;
	cout<<"Pajak Total\t : "<<pjk_ttl<<endl;
	
	gj = gapok[golongan] + tjpn[golongan] - pjk_ttl;
	cout<<"Gaji Bersih\t : "<<gj<<endl;


	return 0;
	
}

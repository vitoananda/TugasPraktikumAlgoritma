#include<iostream>
using namespace std;
const float phi = 3.14;
float jarijari;float tinggi;
float LuasLingkaran();
float KelilingLingkaran();
float VolumeTabung();
int main(){
	int a;
	char pilih;
	do{
	cout<<"Hitung Lingkaran =====\n";
	cout<<"1.Luas Lingkaran\n";
	cout<<"2.Keliling Lingkaran\n";
	cout<<"3.Volume Tabung\n";
	cout<<"Pilih :  ";cin>>a;
	switch(a)
	{
		case 1:
		cout<<"Jari-Jari = ";cin>>jarijari;
		cout<<"Luas Lingkaran Adalah =  "<<LuasLingkaran()<<endl;
		break;
		case 2:
		cout<<"Jari-Jari = ";cin>>jarijari;
		cout<<"Keliling Lingkaran Adalah = "<<KelilingLingkaran()<<endl;
		break;
		case 3:
		cout<<"Jari-Jari = ";cin>>jarijari;
		cout<<"Tinggi = ";cin>>tinggi;
		cout<<"Volume Tabung Adalah = "<<VolumeTabung()<<endl;
		break;
		default:
		cout<<"Tolong Input Pilihan Anda!"<<endl;
	}
	cout<<"Ulangi Program ? (y/n) = ";cin>>pilih;
	cout<<endl;
	}while(pilih == 'y');
return 0;
}

float LuasLingkaran(){
	float luas = phi*jarijari*jarijari;	
	return luas;
}
float KelilingLingkaran(){
	float keliling = 2*phi*jarijari;
	return keliling;
}
float VolumeTabung(){
	float volume = phi*jarijari*jarijari*tinggi;
	return volume;
}


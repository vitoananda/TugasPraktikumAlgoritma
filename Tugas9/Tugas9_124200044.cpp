#include <iostream>
using namespace std;

int main (){
int jumlah;
cout<<"Masukan Banyak Angka = ";cin>>jumlah;
int nilai[jumlah],selisih[jumlah],selisihmax;
float max,min,total,ratarata;

for (int i=0;i<jumlah;i++){
	cout<<"Angka ke-"<<i+1<<"= ";cin>>nilai[i];
	total += nilai[i];
}
cout<<endl;
cout<<"____Hasil____"<<endl;
cout<<"Deret        : ";
for (int i=0;i<jumlah;i++){
	cout<<nilai[i]<<" ";
}
cout<<endl;
for(int i=0;i<jumlah;i++){
	if(nilai[i]>max){
		max=nilai[i];
	}
}
cout<<"Maksimum     : "<<max;
cout<<endl;
min=nilai[0];
for(int i=0;i<jumlah;i++){
	if(nilai[i]<min){
		min=nilai[i];
	}
}
cout<<"Minimum      : "<<min;
cout<<endl;

ratarata = total/jumlah;
cout<<"Rata-Rata    : "<<ratarata;
cout<<endl;

for(int i=0;i<jumlah;i++){
	selisih[i]=nilai[i]-nilai[i+1];
	if(selisih[i]<0){
		selisih[i]=selisih[i]*-1;
	}else if(jumlah<=1){
		selisih[i]=0;
	}
	}
selisihmax=selisih[0];
for(int i=0;i<jumlah-1;i++){
	if(selisihmax<selisih[i]){
		selisihmax=selisih[i];
	}
}


cout<<"Selisih Max  : "<<selisihmax;
return 0;
}









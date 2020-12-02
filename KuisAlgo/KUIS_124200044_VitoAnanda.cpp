#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,i,tes,player1 = 0,player2 = 0;
	string nama,nama2,pilihan,pilihan2;
	float ratarata;
	cout<<"KUIS ======"<<endl;
	cout<<"1. Deret Unik"<<endl;
	cout<<"2. Nilai Akhir"<<endl;
	cout<<"3. Gunting Batu Kertas"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"Silahkan Pilih : ";cin>>a;
	switch(a)
	{
		case 1:
		cout<<"X : ";cin>>a;
		cout<<"Y : ";cin>>b;
		for (i=1;i<=b;i++)
			{
				if (i%a == 0){
					cout<<"|";
				}
				else
					cout<<"-";
			}

		break;
		case 2:
		cout<<"Input Nilai Praktikum ==="<<endl;
		cout<<"Nama        : ";cin>>nama;
		cout<<"NIM         : ";cin>>b;
		cout<<"Kuis        : ";cin>>c;
		cout<<"Responsi    : ";cin>>d;
		cout<<"Tugas       : ";cin>>e;
		cout<<"Project     : ";cin>>f;
		tes = b/1000000;
		ratarata=((0.2*c)+(0.35*d)+(0.15*e)+(0.3*f));
		if(tes == 121){
		cout<<"Hasil Akhir ============="<<endl;
		cout<<"Nama        : "<<nama<<endl;
		cout<<"NIM         : "<<b<<endl;
		cout<<"Jurusan     : Teknik Kimia"<<endl;
		cout<<"rata-rata   : "<<ratarata<<endl;
			if(ratarata >=80 && ratarata <=100){
		cout<<"Nilai Huruf : A" <<endl;
			}
			else if(ratarata >= 60 && ratarata < 80){
		cout<<"Nilai Huruf : B"<<endl;
			}
			else if(ratarata >= 40 && ratarata < 60){
		cout<<"Nilai Huruf : C"<<endl;		
			}
			else if(ratarata >= 20 && ratarata < 40){
		cout<<"Nilai Huruf : D"<<endl;		
			}
			else if(ratarata < 20){
		cout<<"Nilai Huruf : E"	<<endl;	
			}
		}
		else if(tes == 122){
		cout<<"Hasil Akhir ============="<<endl;
		cout<<"Nama        : "<<nama<<endl;
		cout<<"NIM         : "<<b<<endl;
		cout<<"Jurusan     : Teknik Industri"<<endl;
		cout<<"rata-rata   : "<<ratarata<<endl;
			if(ratarata >=80 && ratarata <=100){
		cout<<"Nilai Huruf : A" <<endl;
			}
			else if(ratarata >= 60 && ratarata < 80){
		cout<<"Nilai Huruf : B"<<endl;
			}
			else if(ratarata >= 40 && ratarata < 60){
		cout<<"Nilai Huruf : C"<<endl;		
			}
			else if(ratarata >= 20 && ratarata < 40){
		cout<<"Nilai Huruf : D"<<endl;	
			}
			else if(ratarata < 20){
		cout<<"Nilai Huruf : E"<<endl;	
			}
		}
		else if(tes == 123){
		cout<<"Hasil Akhir ============="<<endl;
		cout<<"Nama        : "<<nama<<endl;
		cout<<"NIM         : "<<b<<endl;
		cout<<"Jurusan     : Informatika"<<endl;
		cout<<"rata-rata   : "<<ratarata<<endl;
			if(ratarata >=80 && ratarata <=100){
		cout<<"Nilai Huruf : A" <<endl;
			}
			else if(ratarata >= 60 && ratarata < 80){
		cout<<"Nilai Huruf : B"<<endl;
			}
			else if(ratarata >= 40 && ratarata < 60){
		cout<<"Nilai Huruf : C"<<endl;		
			}
			else if(ratarata >= 20 && ratarata < 40){
		cout<<"Nilai Huruf : D"<<endl;		
			}
			else if(ratarata < 20){
		cout<<"Nilai Huruf : E"<<endl;	
			}	
		}
		else if(tes == 124){
		cout<<"Hasil Akhir ============="<<endl;
		cout<<"Nama        : "<<nama<<endl;
		cout<<"NIM         : "<<b<<endl;
		cout<<"Jurusan     : Sistem Informasi"<<endl;
		cout<<"rata-rata   : "<<ratarata<<endl;
			if(ratarata >=80 && ratarata <=100){
		cout<<"Nilai Huruf : A" <<endl;
			}
			else if(ratarata >= 60 && ratarata < 80){
		cout<<"Nilai Huruf : B"<<endl;
			}
			else if(ratarata >= 40 && ratarata < 60){
		cout<<"Nilai Huruf : C"<<endl;		
			}
			else if(ratarata >= 20 && ratarata < 40){
		cout<<"Nilai Huruf : D"<<endl;	
			}
			else if(ratarata < 20){
		cout<<"Nilai Huruf : E"<<endl;		
			}		
		}
		if(ratarata >=80 && ratarata <=100 || ratarata >= 60 && ratarata < 80 || ratarata >= 40 && ratarata < 60 )
		cout<<"selamat anda lulus praktikum"<<endl;
		else if(40>ratarata)
		cout<<"maaf anda tidak lulus praktikum"<<endl;
		
		break;
	    case 3:
		cout<<"Masukan nama player 1 : ";cin>>nama;
		cout<<"Masukan nama player 2 : ";cin>>nama2;
		cout<<"Masukan banyak ronde : ";cin>>b;
		for(i = 1; i<=b;i++)
		{
			cout<<"Ronde Ke-"<<i <<endl;
			cout<<"Masukan kertas/gunting/batu "<<nama<<": ";cin>>pilihan;
			cout<<"Masukan kertas/gunting/batu "<<nama2<<": ";cin>>pilihan2;
		
		if(pilihan=="gunting"&&pilihan2=="kertas"){
			player1+=1;
		}
		else if(pilihan=="gunting"&&pilihan2=="batu"){
			player2+=1;
		}
		else if(pilihan=="batu"&&pilihan2=="gunting"){
			player1+=1;
		}
		else if(pilihan=="batu"&&pilihan2=="kertas"){
			player2+=1;
		}
		else if(pilihan=="kertas"&&pilihan2=="batu"){
			player1+=1;
		}
		else if(pilihan=="kertas"&&pilihan2=="gunting"){
			player2+=1;
		}
		
		}
		
		cout<<"===Hasil Akhir==="<<endl;
		cout<<""<<nama<<" menang "<<player1<<" kali"<<endl;
		cout<<""<<nama2<<" menang "<<player2<<" kali"<<endl;
		
		if(player1>player2){
			cout<<"pemenangnya adalah "<<nama<<endl;
		}
		else if(player1<player2){
			cout<<"Pemenangnya adalah "<<nama2<<endl;
		}
		else 
			cout<<"Pertandingan berakhir seri"<<endl;
		break;
	    case 4:
	    exit(0);	
		break;
		default:
			cout<<"Tolong input pilihan anda"<<endl;
	
	   
	
	}
	
	return 0;
}

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	
	cout<<"Gambar Bangun Datar ====="<<endl;
	cout<<"1.Kotak Bolong"<<endl;
	cout<<"2.Segitiga"<<endl;
	cout<<"Silahkan Pilih: ";cin>>a;
	cout<<"\n";
	
	switch(a)
	{
		case 1:
			cout<<"Panjang : ";cin>>b;
			cout<<"Lebar : ";cin>>c;
		
			for (i = 1; i <= b; i++)
			{
				for (j = 1; j <= c; j++)
				{
				if (i==1 || i==b || j==1 || j==c)
				{
				cout << "*";
        		}
				else
				{
			cout << " " ;
		}
		}
		cout << endl;
		Sleep(700);
		}
		break;
		case 2:
			cout<<"Tinggi : ";cin>>a;
			
			for(g= 1 ; g<=a ; g++)
			{
			e=1 ;
			cout<<g ;
				for(i=1 ; i< g ;i++)
				{
				cout<<" "<<g+(a*i)-e ;
				e=e+i+1 ;
				}
				cout<<endl ;
			Sleep(700);
			}
		break;
		
		default:
			cout<<"Tolong Input Gambar Bangun Datar Yang Tersedia <3"<<endl;
	
	}
	return 0;
}
	
	
	
	
	
	

		
		
		
		
	
	
	
	
	
	

	
	
	


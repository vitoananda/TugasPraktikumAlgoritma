#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i;
	
	cout<<"=================================="<<endl;
	cout<<"Program Perkalian Dan Perpangkatan"<<endl;
	cout<<"1.Perkalian"<<endl;
	cout<<"2.Perpangkatan"<<endl;
	cout<<"Silahkan Pilih : ";cin>>a;
	cout<<"\n";

	switch(a)
	{
		case 1:
			cout<<"Input Angka N : ";cin>>b;
			cout<<"Input Angka M : ";cin>>c;
			cout<<"Hasil dari ";
			for(i=1;i <= b;i++)
			{
				d=d+c;
				cout<<c<<" + ";
			}
		cout<<"="<<d<<endl;
		cout<<"Terima Kasih <3"<<endl;
		break;
		case 2:
			cout<<"Input Angka N : ";cin>>e;
			cout<<"Input Angka M : ";cin>>f;
			cout<<"Hasil Dari ";
			for(h=1;h <= f;h++)
			{
				g=g*e;
				cout<<e<<" x ";
			}
		cout<<"="<<g<<endl;
		cout<<"Terima Kasih <3"<<endl;
		break;
		
		default:
			cout<<"Tolong Input Pilihan"<<endl;
			cout<<"Terima Kasih <3"<<endl;
	}
	
	return 0;
	
	//still in progress not done yet
	
	
	
	
	
	
}

#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	int x,y,z,f;
	double m;
	
	cout<<"Umur Ayah	: ";
	cin>>a;
	if(a > 20){
		a=30000;
	}
	
	cout<<"Umur Ibu	: ";
	cin>>b;
	if(b > 20){
		b=30000;
	}
	
	cout<<"Umur Anak 1	: ";
	cin>>c;
	if(c <= 12){
		c=15000;
	}
	else if(c >= 12 && c <= 20){
		c=20000;
	}
	
	cout<<"Umur Anak 2	: ";
	cin>>d;
	if(d <= 12){
		d=15000;
	}
	else if(d >= 12 && d <= 20){
		d=20000;
	}
	
	cout<<"Tagihan satu bulan adalah = ";
	cout<<(a*30)+(b*30)+(c*30)+(d*30)<<endl;
	
	

    return 0;
}

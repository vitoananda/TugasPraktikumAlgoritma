#include <iostream>
using namespace std;
 int main()
{
	string username;
	string password;
	int a,b,c,d,e,f,g;
	
	cout<<"Login Akun =========="<<endl;
	cout<<"Username     : ";cin>>username;
	cout<<"Password     : ";cin>>password;
	cout<<"====================="<<endl;
	
	if(username == "admin" && password == "123")
	{
		cout<<"login berhasil!"<<endl;
		cout<<"Input Nilai Mata Kuliah"<<endl;
		cout<<"1. Algoritma dan Pemrograman"<<endl;
		cout<<"2. Kalkulus"<<endl;
		cout<<"Pilih : ";cin>>a;
		
	switch (a)
	{
	case 1 :
		cout<<"Nilai Harian : ";cin>>b;
		cout<<"Nilai UTS : ";cin>>c;
		cout<<"Nilai UAS : ";cin>>d;
		if((b+c+d)/3>=80)
		{
			cout<<"Anda Lulus Algoritma dan Pemograman Dengan Nilai : "<<(b+c+d)/3<<endl;
		}	
		else if((b+c+d)/3<80)
		{
			cout<<"Anda Tidak Lulus Algoritma dan Pemograman Dengan Nilai : "<<(b+c+d)/3<<endl;
		}
	break;
		
	case 2 :
		cout<<"Nilai Harian : ";cin>>e;
		cout<<"Nilai UTS : ";cin>>f;
		cout<<"Nilai UAS : ";cin>>g;
		if((e+f+g)/3>=80)
		{
			cout<<"Anda Lulus Kalkulus Dengan Nilai : "<<(e+f+g)/3<<endl;
		}
		else if((e+f+g)/3<80)
		{
			cout<<"Anda Tidak Lulus Kalkulus Dengan Nilai : "<<(e+f+g)/3<<endl;
		}
	break;
		
	default :
		cout<<"Input anda salah!"<<endl;
		
		}
	}
	else if(username != "admin" && password != "123")
	{
		cout<<"Anda gagal login"<<endl;
	}
	else if(username != "admin")
	{
		cout<<"Username anda salah!"<<endl;
	}
	else if(password != "123")
	{
		cout<<"Password anda salah!"<<endl;
	}

	
	return 0;
}

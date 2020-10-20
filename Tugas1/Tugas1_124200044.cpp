#include <stdio.h>
main()
{
	char NAMA[51];
	char NIM[51];
	
	printf("INPUT NILAI MAHASISWA : \n");
	printf("----------------------------\n");
	printf("NAMA : ");
	scanf("%[^\n]",&NAMA);
	getchar();
	printf("NIM : ");
	scanf("%s",&NIM);
	getchar();

	double UTS,UAS;
	printf("Nilai UTS = ");
	scanf("%lf",&UTS);
	getchar();
	printf("Nilai UAS = ");
	scanf("%lf",&UAS);
	getchar();
	
	double x,y;
	
	x = (UTS+UAS)/2;
	y = x;
	
	printf("Mahasiswa dengan nama %s(%s) mendapatkan nilai rata-rata = %.2lf",NAMA,NIM,x);
	return 0;
	
}

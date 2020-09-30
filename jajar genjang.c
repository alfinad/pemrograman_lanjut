#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int sisi_miring,tinggi,alas,luas,keliling;
	
	sisi_miring=5;
	tinggi=3;
	alas=6;
	
	luas=tinggi*alas;
	keliling=(sisi_miring+alas)*2;
	
	printf("Luas jajar genjang=%d\n",luas);
	printf("Keliling jajar genjang=%d",keliling);
	
	return 0;
}


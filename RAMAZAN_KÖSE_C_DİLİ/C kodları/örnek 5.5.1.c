#include <stdio.h>

int faktoriyel(int);

int main()
{
	int sayi;
	printf("fakt�riyeli al�nacak sayiyi girin: ");
	scanf("%d",&sayi);
	printf("sayinin fakt�riyeli= %d \n ",faktoriyel(sayi));
	return 0;
}
int faktoriyel(int a)
{
	int x;
	if(a>1)
	x=a*faktoriyel(a-1);
	else
	x=1;
	return x;
}


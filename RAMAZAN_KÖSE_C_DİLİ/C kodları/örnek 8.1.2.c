#include<stdio.h>
int main( void )
{
	char isim[30];
	int i;
	printf( "�sim giriniz> ");
	scanf( "%s", isim );

	printf( "Girdi�iniz isim: ");
	for( i = 0; isim[i]!='\0'; i++ )
		printf( "%c", isim[i] );
	printf("\n");

	return 0;
}


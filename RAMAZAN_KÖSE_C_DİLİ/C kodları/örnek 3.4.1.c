#include <stdio.h>
#include <stdlib.h>
int main(){
    int ay;
    printf("Ay degerini giriniz(1-12)= ");
    scanf("%d",&ay);  // Kullan�c�dan de�er girmesi beklenir
    
    switch(ay){
        case 1: printf("Girdiniginiz deger \"Ocak\" ayidir");  // Ekrana " yazd�rmak i�in \" yazmak laz�m!!!
            break;
        case 2: printf("Girdiniginiz deger \"Subat\" ayidir");
            break;
        case 3: printf("Girdiniginiz deger \"Mart\"  ayidir");
            break;
        case 4: printf("Girdiniginiz deger \"Nisan\" ayidir");
            break;
        case 5: printf("Girdiniginiz deger \"Mayis\" ayidir");
            break;
        case 6: printf("Girdiniginiz deger \"Haziran\" ayidir");
            break;
        case 7: printf("Girdiniginiz deger \"Temmuz\" ayidir");
            break;
        case 8: printf("Girdiniginiz deger \"Agustos\" ayidir");
            break;
        case 9: printf("Girdiniginiz deger \"Eylul\" ayidir");
            break;
        case 10: printf("Girdini�ini deger \"Ekim\" ayidir");
            break;
        case 11: printf("Girdini�ini deger \"Kasim\" ayidir");
            break;
        case 12: printf("Girdini�ini deger \"Aralik\" ayidir");
            break;
        default: printf("Hatali islem sectiniz!!!");  //1-12 aral���ndan farkl� bir de�er girerse ekrana default yazd�r�l�r
            break;
    }
    printf("\n");
    system("pause");  // Kullan�c� herhangi bir tu�a basana kadar program� beklemeye al�r
    return 0;
}


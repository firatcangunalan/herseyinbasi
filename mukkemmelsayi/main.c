#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void mukemmelsayi(){

    int sayi;

    while(1){

    printf("Mükemmel sayý olup olmadýðýný kontrol etmek istediðiniz sayýyý giriniz. Çýkmak için -1 yazýn.\n");
    scanf("%d",&sayi);

    if(sayi==-1){break;}

    int toplam=0;

    for(int i=1;i<sayi;i++){
        if(sayi%i==0){
            toplam += i;
        }

    }

    if(toplam==sayi){
        printf("%d mükemmel sayýdýr.\n",sayi);
    }
    else{
        printf("%d mükemmel sayý deðildir.\n",sayi);
    }

    }

}







int main()
{
    setlocale(LC_ALL,"Turkish");

    mukemmelsayi();

    return 0;
}

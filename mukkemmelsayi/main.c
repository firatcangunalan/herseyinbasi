#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void mukemmelsayi(){

    int sayi;

    while(1){

    printf("M�kemmel say� olup olmad���n� kontrol etmek istedi�iniz say�y� giriniz. ��kmak i�in -1 yaz�n.\n");
    scanf("%d",&sayi);

    if(sayi==-1){break;}

    int toplam=0;

    for(int i=1;i<sayi;i++){
        if(sayi%i==0){
            toplam += i;
        }

    }

    if(toplam==sayi){
        printf("%d m�kemmel say�d�r.\n",sayi);
    }
    else{
        printf("%d m�kemmel say� de�ildir.\n",sayi);
    }

    }

}







int main()
{
    setlocale(LC_ALL,"Turkish");

    mukemmelsayi();

    return 0;
}

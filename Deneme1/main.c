#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

float toplam(float deger1,float deger2)
{

    float Sonuc = deger1+deger2;

    return Sonuc;

}

float cikartma(float deger1,float deger2)
{

    float Sonuc = deger1-deger2;

    return Sonuc;

}

float carpma(float deger1,float deger2)
{

    float Sonuc = deger1*deger2;

    return Sonuc;

}

float bolme(float deger1,float deger2)
{

    float Sonuc = deger1/deger2;

    return Sonuc;

}

char dongudegeri(){

    char basadonus;

        printf("Tekrar i�lem yapmak ister misin? (e/h)?\n");
        scanf(" %c",&basadonus);

        return basadonus;

}

int main()
{

    int devam=1;

    while(devam==1){

    float sonuc;

    float x,y;

    int karar;

    setlocale(LC_ALL,"Turkish");


    printf("Hangi i�lemi yapmak istiyorsunuz? (Toplamak i�in: 0 ��kartmak i�in: 1 �arpmak i�in: 2 B�lmek i�in: 3 tu�lay�n�z.\n");

    scanf("%d",&karar);

    printf("Hangi iki say�yla i�lem yapmak istersiniz?\n");


    scanf("%f\n",&x);
    scanf("%f",&y);


    char basadonus;


    switch(karar){



    case 0:
        printf("Toplama i�leminin sonucu: %.1f\n\a",toplam(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 1:
        printf("��kartma i�leminin sonucu: %.1f\n\a",cikartma(x,y));
              if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 2:
        printf("�arpma i�leminin sonucu: %.1f\n\a",carpma(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 3:
        printf("B�lme i�leminin sonucu: %.1f\n\a",bolme(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    default:
        printf("K�r m�s�n orda yaz�yor neler yazabilece�in? Bizi mi sikiyon?");
        break;



    }
    }
    printf("BU PROGRAM FIRAT CAN G�NALAN ve EMRE CEM ELEV�S TARAFINDAN KODLANMI�TIR. B�LG�M�Z DI�INDA DA�ITILMASI VE �ZER�NDEN T�CAR� AMA� G�D�LMES� DURUMUNDA HUKUK� ��LEMLER BA�LATILACAKTIR. T�M HAKLARI SAKLIDIR!\a");
    getch();
    return 0;
}

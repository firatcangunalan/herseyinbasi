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

        printf("Tekrar iþlem yapmak ister misin? (e/h)?\n");
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


    printf("Hangi iþlemi yapmak istiyorsunuz? (Toplamak için: 0 Çýkartmak için: 1 Çarpmak için: 2 Bölmek için: 3 tuþlayýnýz.\n");

    scanf("%d",&karar);

    printf("Hangi iki sayýyla iþlem yapmak istersiniz?\n");


    scanf("%f\n",&x);
    scanf("%f",&y);


    char basadonus;


    switch(karar){



    case 0:
        printf("Toplama iþleminin sonucu: %.1f\n\a",toplam(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 1:
        printf("Çýkartma iþleminin sonucu: %.1f\n\a",cikartma(x,y));
              if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 2:
        printf("Çarpma iþleminin sonucu: %.1f\n\a",carpma(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    case 3:
        printf("Bölme iþleminin sonucu: %.1f\n\a",bolme(x,y));
        if(dongudegeri()=='e'){
            break;
        }
        devam=0;

        break;
    default:
        printf("Kör müsün orda yazýyor neler yazabileceðin? Bizi mi sikiyon?");
        break;



    }
    }
    printf("BU PROGRAM FIRAT CAN GÜNALAN ve EMRE CEM ELEVÝS TARAFINDAN KODLANMIÞTIR. BÝLGÝMÝZ DIÞINDA DAÐITILMASI VE ÜZERÝNDEN TÝCARÝ AMAÇ GÜDÜLMESÝ DURUMUNDA HUKUKÝ ÝÞLEMLER BAÞLATILACAKTIR. TÜM HAKLARI SAKLIDIR!\a");
    getch();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void turkcedili(){
setlocale(LC_ALL,"Turkish");
}

float zayifasit(){
int girenler,urunlerHidrojen,urunlerKatyon;
printf("Girenlerin katsay�s�n� tam say� olarak girin.\n");
scanf("%d",&girenler);
printf("�r�nlerdeki hidrojenin katsay�s�n� tam say� olarak girin.\n");
scanf("%d",&urunlerHidrojen);
printf("�r�nlerdeki anyonun katsay�s�n� tam say� olarak girin.\n");
scanf("%d",&urunlerKatyon);
printf("Girenler i�in mol de�eri mi gireceksin, molarite de�eri mi? Mol i�in 1, molarite i�in 2 tu�la.\n");
int secimmolmolar;
float girenlermol;
scanf("%d",&secimmolmolar);
if(secimmolmolar==1){
    printf("Mol de�eriniz girin.\n");
    scanf("%f",&girenlermol);
    devamhesap:
    printf("Asidinizin Ka sabiti de�erini girin.\n");
    float asitKa;
    scanf("%f",&asitKa);
    float sonuc,a,b,c;
    a=urunlerHidrojen*urunlerKatyon;
    b=asitKa*girenlermol;
    c=-asitKa*girenlermol;
    float delta;
    delta=(b*b)-(4)*a*c;
    sonuc=(-b+sqrt(delta))/(2*a);
    float pH;
    pH=-log10(sonuc);
    printf("pH de�eri: %f Hidrojen Deri�imi: %f",pH,sonuc);
}
else{
    float litre,molarite;
    printf("Molariteyi giriniz.\n");
    scanf("%f",&molarite);
    printf("Ka� litrede oldu�unu giriniz.\n");
    scanf("%f",&litre);
    girenlermol=(molarite*litre);
    goto devamhesap;
}
}

int main()
{
    turkcedili();
    zayifasit();
    return 0;
}

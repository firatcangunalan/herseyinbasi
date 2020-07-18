#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void turkcedili(){
setlocale(LC_ALL,"Turkish");
}

float zayifasit(){
int girenler,urunlerHidrojen,urunlerKatyon;
printf("Girenlerin katsayýsýný tam sayý olarak girin.\n");
scanf("%d",&girenler);
printf("Ürünlerdeki hidrojenin katsayýsýný tam sayý olarak girin.\n");
scanf("%d",&urunlerHidrojen);
printf("Ürünlerdeki anyonun katsayýsýný tam sayý olarak girin.\n");
scanf("%d",&urunlerKatyon);
printf("Girenler için mol deðeri mi gireceksin, molarite deðeri mi? Mol için 1, molarite için 2 tuþla.\n");
int secimmolmolar;
float girenlermol;
scanf("%d",&secimmolmolar);
if(secimmolmolar==1){
    printf("Mol deðeriniz girin.\n");
    scanf("%f",&girenlermol);
    devamhesap:
    printf("Asidinizin Ka sabiti deðerini girin.\n");
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
    printf("pH deðeri: %f Hidrojen Deriþimi: %f",pH,sonuc);
}
else{
    float litre,molarite;
    printf("Molariteyi giriniz.\n");
    scanf("%f",&molarite);
    printf("Kaç litrede olduðunu giriniz.\n");
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

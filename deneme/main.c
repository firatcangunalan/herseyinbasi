#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float ikinciderecedendenklem(float a,float b,float c){
float delta, sonuc1, sonuc2;
baslangic:
/*printf("a b ve c de�erlerini girin.\n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);*/
delta = (b*b)-(4)*a*c;
sonuc1 = (-b+sqrt(delta))/(2*a);
sonuc2 = (-b-sqrt(delta))/(2*a);
    if(delta>=0){
        printf("K�k 1:%f\nK�k 2:%f",sonuc1,sonuc2);

    }

    else{
        printf("Delta 0'dan k���k geliyor. L�tfen de�erleri do�ru giriniz.\n");
        goto baslangic;
    }

}



void main()
{
    setlocale(LC_ALL,"Turkish");

    float x,y,z;

    printf("a b ve c de�erlerini girin.\n");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);

    ikinciderecedendenklem(x,y,z);

}

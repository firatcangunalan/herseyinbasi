#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int tekrar=1;
    char dongucevap;

    while (tekrar){
    setlocale(LC_ALL,"Turkish");

    float a,b,c;
    float kokdelta;

    printf("L�tfen s�ras�yla ax^2+bx+c fonksiyonundaki a, b ve c de�erlerini giriniz.\n");
    scanf("%f%f%f",&a,&b,&c);

    float delta = b*b-(4)*a*c;

        if(delta>=0){

    kokdelta=sqrt(delta);

    float pozitifkok = (-b+kokdelta)/(2*a);
    // float test = -b + kokdelta; //KONTROL ���N YAZILDI***
    // float test1 = test/(2*a);          ***
    float negatifkok = (-b-kokdelta)/(2*a);

    printf("1. K�k:%.3f \n2. K�k:%.3f\n\a\Tekrar yapmak ister misiniz?\n",pozitifkok,negatifkok);

    scanf(" %c",&dongucevap);

                if(dongucevap=='e'){
                    tekrar=1;
                }
                    else{
                        tekrar=0;

                    }
    // printf("%f,%f",test,test1);

        }

        else {

            printf("Delta 0'dan k���k. Negatif k�k al�namaz. Delta: %.3f\a\nTekrar yapmak ister misiniz?\n",delta);
            scanf(" %c",&dongucevap);
                if(dongucevap=='e'){
                    tekrar=1;
                }
                    else{
                        tekrar=0;

                    }



        }

    }
    return 0;


}

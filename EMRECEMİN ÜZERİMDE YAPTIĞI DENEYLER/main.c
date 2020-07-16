#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int dortgeninalani()
{
    int a,b;
    printf("a uzunluðunu giriniz.\n");
    scanf("%d",&a);
    printf("b uzunluðunu giriniz.\n");
    scanf("%d",&b);
    int sonuc = a*b;

    return sonuc;
}

float daireninalani()
{
    float r;
    printf("Dairenin yarýçapýný girin.\n");
    scanf("%f",&r);
    float sonuc = (3.14)*r*r;

    return sonuc;
}

float ucgeninalani()
{
    float h,a;
    printf("Üçgenin taban alanýný giriniz.\n");
    scanf("%f",&h);
    printf("Üçgenin yüksekliði giriniz.\n");
    scanf("%f",&a);
    float sonuc = h*a/(2);

    return sonuc;
}
int main()
{
    setlocale(LC_ALL,"Turkish");

    int karar;

    int basadonus;

    int devam=1;

    while (devam==1){


    printf("Alanýný hesaplamak istediðiniz geometrik cisimi seçiniz. Kare: 0 Daire: 1 Üçgen: 2 Dikdörtgen: 3\n");

    scanf("%d",&karar);

    switch(karar)
{
    case 0:
        printf("%d\n\a",dortgeninalani());
        printf("Tekrar iþlem yapmak ister misin (e/h)?\n");
        scanf(" %c",&basadonus);
        if (basadonus == 'e'){
            break;
        }
        devam=0;
        break;

    case 1:
        printf("%f\n\a",daireninalani());
        printf("Tekrar iþlem yapmak ister misin (e/h)?\n");
        scanf(" %c",&basadonus);
        if (basadonus == 'e'){
            break;
        }
        devam=0;
        break;

    case 2:
        printf("%f\a\n",ucgeninalani());
        printf("Tekrar iþlem yapmak ister misin (e/h)?\n");
        scanf(" %c",&basadonus);
        if (basadonus == 'e'){
            break;
        }
        devam=0;
        break;

    case 3:
        printf("%d\a\n",dortgeninalani());
        printf("Tekrar iþlem yapmak ister misin (e/h)?\n");
        scanf(" %c",&basadonus);
        if (basadonus == 'e'){
            break;
        }
        devam=0;
        break;
}
    }
    printf("TAMAMEN FIRAT CAN GÜNALAN TARAFINDAN HAZIRLANMIÞTIR.");
    getch();
    return 0;
}

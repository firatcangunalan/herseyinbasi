#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Turkish");

    int fibonacci;
    int kucuk=0;
    int buyuk=1;
    int sonuc=0;
    int ara=0;

    printf("Kaça kadar fibonacci dizisi görmek istediðini yaz.\n");
    scanf("%d",&fibonacci);
    printf("\n1 ");

    while(sonuc<fibonacci){
        sonuc=kucuk+buyuk;
      // 55      21    34
        ara=buyuk;
     //  0    34
        buyuk=sonuc;
     //  55     55
        kucuk=ara;
    //    34   34
    if (sonuc<=fibonacci){
        printf("%d ",sonuc);   //1+1-2   1+2-3  2+3-5
        }
    }

    return 0;
}

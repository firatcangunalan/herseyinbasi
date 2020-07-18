#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Turkish");
    int adet;
    printf("Kaç adet sayý sýralayacasýn?\n");
    scanf("%d",&adet);

    int sayilar[adet];{}

    for(int i=0;i<adet;i++){
        printf("%d adet sayýdan %d. olanýný gir.\n",adet,i+1);
        scanf(" %d",&sayilar[i]);
    }
    int i,mevcut,j;

    for(i=1;i<adet;i++)
        {
        mevcut=sayilar[i];
        j=i;
        while(j>0 && sayilar[j-1]>mevcut)
            {
            sayilar[j]=sayilar[j-1];
            j--;
        }
        sayilar[j]=mevcut;

    }
    printf("\n");
    for(i=0;i<adet;i++)
        {
        printf("%d\n",sayilar[i]);
    }
    return 0;
}

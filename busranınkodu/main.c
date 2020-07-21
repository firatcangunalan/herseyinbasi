#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

dildestegi(){
    setlocale(LC_ALL,"Turkish");
}

void main()
{
    dildestegi();
    //setlocale(LC_ALL,"Turkish");
    char isim[15];
    printf("Merhaba. Busra ile tanismak istiyormussun demekki. Adin ne?\n");
    scanf("%s",&isim);
    printf("Ooo, selam %s, nasilsin iyi misin? İyisindir tabi. Kaç yasindasin?\n",isim);
    float yasilk;
    scanf("%f",&yasilk);
    if(fmod(yasilk,1) != 0){
        printf("Bu yasina geldin hala bucuk hesabi mi yapiyorsun? Yakismadı sana.\nHer neyse...");
        int yas=yasilk;
        printf("Demek %d yaşındasın.\n",yas);
    }
    int yas;
    yas=yasilk;
    if(yas>=18 || yas<=25){
        printf("Hmm... Tam büşranın aradıgı yaşlar bunlar. Enerjin buraya kadar geldi.\n");
    }

}

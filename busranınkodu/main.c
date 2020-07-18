#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    char deneme[10];
    scanf("%s",&deneme);
    if(deneme=='e','v','e','t'){
        printf("Oldu:%sdeneme\n",deneme);
    }
    else{
        printf("Olmadý. Sonuç:%s deneme\n",deneme);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int mert;

    scanf("%d",&mert);

    printf("Mertin ya�� =%d",mert);

    return 0;
}

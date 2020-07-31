#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<conio.h>


void emrecem(int *adres)
{
printf("%d",*adres*h*adres);
}

int main()
{


    int y=5;

    emrecem(&y);

    return 0;
}

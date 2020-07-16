#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/*

ax^2+bx+c

(-b^2+kökb^2-4ac)/2a

*/

/*void pozitifkok(){

    int a,b,c;
    cin a;
    cin b;
    cin
    int delta = sqrt((b*b)-(4)*a*c);
    int pozitifkok1 = ((-b+sqrt(delta))/(2)*a);


    scanf("Lütfen a, b ve c deðerlerini giriniz. %f%f%f \n",&a,&b,&c);

    printf("pozitifkok = %f",pozitifkok1);


}
*/

int main()
{
    setlocale(LC_ALL,"Turkish");

    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);

    print("%f%f%f",a,b,c);

    return 0;
}

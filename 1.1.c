
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("veamos si pasas");
     do
    {
        printf("Ingrese el numero 1: ");
        scanf("%f",&a);
    }while(a<0 || a>20);
    do
    {
        printf("Ingrese el numero 2: ");
        scanf("%f",&b);
    }while(b<0 || b>20);
c=(a+b)/2;
printf("el promedio es: %.2f\n",c);
if (c >= 0 && c < 11)
{
    printf("perdido\n");
}
else if (c >= 11 && c < 14)
{
    printf("supletorio\n");
}
else
{
    printf("aprobado\n");
}
    return 0;
}

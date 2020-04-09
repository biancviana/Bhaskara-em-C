#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main ()
{
    setlocale (LC_ALL, "portuguese");
    float a,b,c, delta, x1,x2;
    printf ("Informe o valor de a:\n");
    scanf ("%f",&a);
    printf ("\nInforme o valor de b:\n");
    scanf ("%f",&b);
    printf ("\nInforme o valor de c:\n");
    scanf ("%f",&c);
    delta=(b*b)-(4*a*c);
    x1=(-b+sqrt (delta))/(2*a);
    x2=(-b-sqrt (delta))/(2*a);
    if (delta<0)
    {
        printf ("\nNão possui raízes reais!\n");
    }
    else
    {
        printf ("\nO valor de x1 é de: %.f\n", x1);
        printf ("O valor de x2 é de: %.f", x2);
    }
}




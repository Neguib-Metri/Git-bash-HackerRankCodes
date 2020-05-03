#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ 
int n,m;
float x,y; 

	scanf("%d%d", &n,&m); //escaneamos los numeros tanto enteros como flotantes//
    scanf("%f%f", &x,&y);

    printf("%d %d\n", n+m, n-m); //realizamos las operaciones//
    printf("%0.1f %0.1f", x+y, x-y); //* Agregamos el 0.1 para que solo imprima un 0 del float//
    return 0;
}

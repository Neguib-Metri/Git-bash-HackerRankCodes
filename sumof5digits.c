#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
//continuamos para obtener la suma del numero de 5 digitos agregado por el usuario es decir que cuando un numero de 5 digitos es introducido el codigo lo lee y luego ejecuta una sua de los 5 numeros y luego imprime el resultado.

int sum = 0;

while(n){
        sum += n % 10;
        n /= 10;
}

    printf("%d\n", sum);
    return 0;
}

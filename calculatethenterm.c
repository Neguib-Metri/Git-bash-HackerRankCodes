#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1)
    return a;
else if (n==2)
    return b;
    else if(n==3)
    return c;       //Debido hay que hay que completar la misma succesion y respetando el ejercicio del codigo que S(4) S3+S2+S1 utilzamos el n-1 y asi sucevimente las 3 veces obteniendo asi el resultado logico solicitado// // 5 1 2 3 que serian 5+1+2+3=11 
    else
return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
}

int main() {
    int n, a, b, c;
  // Simplemente el escanner y el almacenado de los digitos dados por la computadora, y el retorno de la funcion para luego imprimir el resultado //
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

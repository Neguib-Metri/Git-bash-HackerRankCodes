#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &*s); //dejamos declarado el char que entrara como "welcom programming c" //
    
    printf("Hello, World!\n"); //hacemos un printf normal//
    printf("%s",s); //imprimimos el chart dado por el bash// 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

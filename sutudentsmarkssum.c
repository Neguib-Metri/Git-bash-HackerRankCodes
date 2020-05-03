#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {

  //Write your code here.

    int i, sum;



    for (i = 0; i < number_of_students; i++) {
// basicamente el for recorre la cantidad de alumnos y el genero es la variable b(suma los pares) si gender es b(suma los impares) // al final devuelve el resultado.

        if(gender == 'b') {
            if(i % 2 == 0) {
                sum += *(marks+i);
            }
        } else if(gender == 'g'){
            if(i % 2 != 0) {
                sum += *(marks+i);
            }
        }


    }

    return sum;

}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}

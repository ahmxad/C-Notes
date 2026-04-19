#include <stdio.h>
int main(){
    int age = 21;
    float marks = 2.3;
    char grade = 'A';
    printf("%d\n", age);
    printf("%.2f\n", marks);
    printf("%c\n", grade);
    printf("My name is Ahmad, I am %d years old and i got %.2f marks and grade: %c\n", age, marks, grade);
    return 0;
}
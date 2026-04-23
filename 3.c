// if-else conditions

#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=18){
        printf("you are eligible for the CNIC\n");
    } else {
        printf("Wait for %d more years\n", 18 - age);
    }
    return 0;
}
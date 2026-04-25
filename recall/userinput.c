#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age); //the ambersand (&) picks the user input

    printf("You are %d years old\n", age);

    return 0;
}
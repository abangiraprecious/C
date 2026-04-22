#include <stdio.h>

int main() {
    char name[] = "Anna"; //char is used for characters, letters. name[] - an array of characters
    printf("My name is %s\n", name); //%s - placeholder for strings
    printf("\n");

    printf("String and Integers in action below:\n");

    int age = 34;
    char myName[] = "Joy";

    printf("My name is %s and I am %d years old.\n", myName, age);

    return 0;
}
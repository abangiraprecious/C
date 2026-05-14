#include <stdio.h> 

int main () {

    int age = 32;
    float cost = 2000;
    double pi = 3.141592653589793238462643383279502884;
    char punctuation = ';';
    char array_name[] = "Ella";

    printf("The integer is %d \n", age);
    printf("The is float number is %.2f \n", cost);
    printf("The is double number is %.20lf \n", pi);
    printf("The char is %c \n", punctuation);
    printf("The array/string is %s \n",array_name);

 
    return 0;
}
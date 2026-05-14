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
    printf("The array/string is %s \n", array_name);

    /*
    Width
    - specifies the minimum number of characters to print...typically before the value of the variable
    */

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%4d\n", num3);
 
    return 0;
}
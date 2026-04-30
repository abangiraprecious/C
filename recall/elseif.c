#include <stdio.h>

int main() {

    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    if(age < 13) {
        printf("Preteen");
    } else if (age < 18) {
        printf("Not a legal adult yet");
    } else if (age < 60) {
        printf("Adult");
    } else {
        printf("Senior");
    } 
    return 0;
}
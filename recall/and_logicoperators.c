//and && - both conditions must be true
#include <stdio.h>

int main() {

    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    if (age >= 18 && age < 60) {
        printf("Working class\n");
    }

    return 0;
}
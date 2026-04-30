//NOT ! - reverses a condition
#include <stdio.h>

int main() {

    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    if (!(age >= 18 || age < 60)) {
        printf("Child\n");
    }

    return 0;
}
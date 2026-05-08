//NOT ! - reverses a condition
// (! (command))
#include <stdio.h>

int main() {

    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    if (!(age >= 18)) {
        printf("Child\n");
    }

    return 0;
}
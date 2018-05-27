#include <stdio.h>

int main()
{
    int i, x;
    (void) x; // Asi sale como que estoy utilizando la X
    printf("Hola, como estas?\n");
    for (i = 0; i < 5; ++i)
        printf("Hello World!\n");
    printf("\n");

    return 0;
}

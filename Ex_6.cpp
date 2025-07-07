#include <stdio.h>
#include <stdlib.h>

int main() {
   int i, g, h;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &h);

    for (i = 1; i <= h; i++) {
        // Espaços antes dos asteriscos
        for (g = 1; g <= h - i; g++) {
            printf(" ");
        }

        // Asteriscos
        for (g = 1; g <= (2 * i - 1); g++) {
            printf("*");
        }

        printf("\n");
    }
    getchar();
    return 0;
}

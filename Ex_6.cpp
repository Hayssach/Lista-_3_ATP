#include <stdio.h>
#include <stdlib.h>

int main() {
   int i, j, altura;

    printf("Digite a altura do tri�ngulo: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++) {
        // Espa�os antes dos asteriscos
        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        // Asteriscos
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }
    getchar();
    return 0;
}

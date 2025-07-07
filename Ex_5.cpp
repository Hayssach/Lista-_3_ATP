#include <stdio.h>
#include <stdlib.h>

int main(){
    int j;
    printf("Digite o valor limite para a cadeia de Fibonacci: ");
    scanf("%d", &j);

    int b = 0, c = 1, proximo; 

    printf("Cadeia de Fibonacci até %d:\n", h);

    // Imprime o primeiro termo
    if (j >= 0)
        printf("%d", b);
    
    // Imprime o segundo termo
    if (j >= 1)
        printf(", %d", c);
        
    // Gera os próximos termos da cadeia
    proximo = b + c;
    while (proximo <= j) {
        printf(", %d", proximo);
        b = c;
        c = proximo;
        proximo = b + c;
    }
    getchar();
    printf("\n");
    return 0;
}

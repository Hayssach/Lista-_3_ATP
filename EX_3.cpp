#include <stdlib.h>
#include <stdio.h>

int main(){
	int op, numero1, numero2;
	 
	 do {
    printf("\nCalculadora Simples\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &op);

    if (op >= 1 && op <= 4) {
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &numero1, &numero2);
    }

    if (op == 1) {
        printf("Resultado: %d\n", numero1 + numero2);
    } else if (op == 2) {
        printf("Resultado: %d\n", numero1 - numero2);
    } else if (op == 3) {
        printf("Resultado: %d\n", numero1 * numero2);
    } else if (op == 4) {
        if (numero2 != 0)
            printf("Resultado: %d\n", numero1 / numero2);
        else
            printf("Erro: Divisao por zero!\n");
    } else if (op == 5) {
        printf("Saindo...\n");
    } else {
        printf("Opcao invalida! Tente novamente.\n");
    }
} while (op != 5);
   
   return(0);
}

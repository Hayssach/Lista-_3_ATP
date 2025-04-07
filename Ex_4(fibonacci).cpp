#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    int f = 0, c = 1, prox; //isso significa próximo
    
    //Solicitar um numero para a sequencia
    printf("Digite um numero n (n-ésimo termo de Fibonacci)");
    scanf("%d", &num);
    
    // Validar o valor de n
    if(num <= 0){
        printf("Por favor digite um numero maior que 0.\n");
        return 1;
    }
  
    // Exibir os primeiros termos da sequência de Fibonacci
    printf("Sequência de Fibonacci até o %dº termo:", num);
    
    for(i = 1; i <= num; i++){
        if(i == 1){
            printf("%d", f); // O primeiro termo é 0
        }else if (i == 2) {
            printf("%d ", c);  // O segundo termo é 1
        }else{
            prox = f + c;  // O próximo termo é a soma dos dois anteriores
            f = c;
            c = prox;
            printf("%d ", prox);  // Imprime o próximo termo
        }
    }
    printf("\n");
    getchar();
    return 0;
}

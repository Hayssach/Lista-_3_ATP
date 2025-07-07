#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, numero;
    int f = 0, c = 1, proximo; 
    
    //Solicitar um numero para a sequencia
    printf("Digite um numero n (n-ésimo termo de Fibonacci)");
    scanf("%d", &numero);
    
    if(numero <= 0){
        printf("Por favor digite um numero maior que 0.\n");
        return 1;
    }
  
    // Exibir os primeiros termos da sequência de Fibonacci
    printf("Sequência de Fibonacci até o %dº termo:", numero);
    
    for(j = 1; j <= numero; i++){
        if(j == 1){
            printf("%d", f); // 0
        }else if (j == 2) {
            printf("%d ", c);  // 1
        }else{
            proximo = f + c;  
            f = c;
            c = proximo;
            printf("%d ", proximo); 
        }
    }
    printf("\n");
    getchar();
    return 0;
}

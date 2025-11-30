#include <stdio.h>
#include <stdlib.h>

int *alocarVetor(int n){
    return (int *)malloc(n * sizeof(int));
}

int *somaVetores(int *u, int *v, int n){
    int *resultadoSoma = alocarVetor(n);
    for(int i  = 0; i < n; i++){
        resultadoSoma[i] = u[i] + v[i];  
    }
    return resultadoSoma;
}

int main() {
    
    printf("===SOMA DE VETORES===\n\n");
    
    
    int n1, n2;
    printf("Entre com um n1 e n2 para alocar o espaço dinamicamente nos vetores u e v:\n");
    scanf("%d %d", &n1, &n2);


    int *u = alocarVetor(n1);
    int *v = alocarVetor(n2);

    printf("Entre com os elementos do vetor u:\n");
    for(int i = 0; i < n1; i++){
        scanf("%d", &u[i]);
    }
    
    printf("Entre com os elementos do vetor v:\n");
    for(int i = 0; i < n2; i++){
        scanf("%d", &v[i]);
    }
    
    if(n1 == n2){
        int *soma = somaVetores(u, v, n1);
        printf("Resultado:\n");
        for(int i = 0; i < n1; i++){
            printf("%d ", soma[i]);
            
        }

        free(soma);
    }else{
        printf("dimensoes invalidas");
    }
    
    free(u);
    free(v);

    return 0;
}


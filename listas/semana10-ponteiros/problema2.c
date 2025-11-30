#include <stdio.h>
#include <stdlib.h>



int *alocarVetor(int n){
    return (int *)malloc(n * sizeof(int));
}

int *buscaNoVetor(int *v, int n, int valor, int *qtd){
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == valor){
            contador++;
        }
    }

    *qtd = contador;

    if(contador == 0){
        return NULL;
    }

    int *indices = alocarVetor(contador);
    int k = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == valor){
            indices[k] = i;
            k++;
        }
    }

    return indices;
}

int main(){
    printf("===OCORRENCIAS NO VETOR===\n\n");

    int n;
    printf("Entre com um numero n para determinar o numero de elementos no vetor v:\n");
    scanf("%d", &n);

    int *v = alocarVetor(n);

    printf("Entre com os numeros do vetor v:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int valor; 
    printf("Entre com um valor para verificar sua o ocorrencia no vetor v:\n");
    scanf("%d", &valor);

    int quantidade = 0;
    int *busca = buscaNoVetor(v, n, valor, &quantidade);

    if(busca == NULL){
        printf("Nenhuma ocorrencia");
    }else{
        printf("Ocorrencias: %d\n", quantidade);
        printf("Indices das ocorrencias no vetor v: ");
        for(int i = 0; i < quantidade; i++){
            printf("%d ", busca[i]);
        }

        free(busca);
    }

    free(v);

    return 0;
}


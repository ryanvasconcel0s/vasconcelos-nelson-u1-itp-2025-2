#include <stdio.h>


int ehPrimo(int numero){

    int verficador = 0;

    if (numero < 2) {
        return 0;
    }
    
    for(int i = 1; i <= numero; i++){
        if(numero%i == 0){
            verficador++;
        }
    }

    if (verficador == 2){
        return numero;
    }else{
        return 0;
    }
    
}

int main(){
    printf("===PRIMOS TRIPLOS===\n\n");
    int numero = 5000;
    for(int i = 0; i < numero; i++){

        int n1, n2, n3;
        n1 = ehPrimo(i);
        n2 = ehPrimo(i+2);
        n3 = ehPrimo(i+6);
    
        if(n1 != 0 && n2 != 0 && n3 != 0){
            printf(("(%d, %d, %d)\n"), n1, n2, n3);
        }
    }

    return 0;

}
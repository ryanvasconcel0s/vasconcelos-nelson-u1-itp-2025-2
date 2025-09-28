#include <stdio.h>
#include <math.h>

/*
Condições:
Números diferentes entre si
Todos devem ser números inteiros
O quadrado dos catetos deve ser igual ao quadrado da hipotenusa
*/


int main()
{
    int a, b;
    float c, c_quadrado, verificador;
    
    for(a = 1; a < 1000; a++){
        for(b = 1; b < 1000; b++){
            c_quadrado = pow(a, 2) + pow(b, 2); //catetos a e b elevados ao quadrado
            c = sqrt(c_quadrado); // raiz quadrada dos catetos para achar c
            verificador = (int)c; // a função desse verificador, é saber se c é um inteiro 
            
            if(a!=b && c == verificador && a < b && c < 1000) {
                printf("(%d, %d, %.f)\n", a, b, verificador);
             
            }
        }
    }
    return 0;
}
 
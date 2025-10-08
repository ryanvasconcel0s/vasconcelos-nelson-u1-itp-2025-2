#include <stdio.h> 


int main()
{

printf("===DIAGNOSTICO MEDICO SIMPLES===\n\n");


char febre, dCabeca, dCorpo, tosse;

printf("Tem febre? (S/N): ");
scanf(" %c", &febre);
printf("Tem dor de cabeça? (S/N): ");
scanf(" %c", &dCabeca);
printf("Tem dor no corpo: (S/N)?: ");
scanf(" %c", &dCorpo);
printf("Tem tosse? (S/N): ");
scanf(" %c", &tosse);

if(febre == 'S' && dCabeca == 'S' && dCorpo == 'S' && tosse == 'N'){           //Febre + Dor de cabeça + Dor no corpo
    printf("\nPossivel gripe");
}else if(febre == 'S' && dCabeca == 'N' && dCorpo == 'N' && tosse == 'S'){     //Tosse + Febre
    printf("\nPossivel refriado");
}else if(febre == 'N' && dCabeca == 'S' && dCorpo == 'N' && tosse == 'N'){     //Apenas dor de cabeça
    printf("\nPossivel enxaqueca");                                              
}else if(febre == 'S' && dCabeca == 'N' && dCorpo == 'N' && tosse == 'N'){     //Apenas febre
    printf("\nConsulte o medico");
}else if(febre == 'N' && dCabeca == 'N' && dCorpo == 'N' && tosse == 'N'){     //Nenhum sintoma
    printf("\nVoce parece estar bem");
}else{
    printf("\nConsulte um medico para a avaliacao");                           //Qualquer outra combinação
}





return 0;

}
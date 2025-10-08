#include <stdio.h>

int main()
{
    float c_temp, f_temp, k_temp; 
    
    printf("=== CONVERSOR DE TEMPERATURA DE CELSIUS PARA FAHRENHEIT E KELVIN ===\n");
    
    printf("Digite a temperatura a ser convertida em Celsius:\n");
    scanf("%f", &c_temp);
    
    f_temp = (c_temp * 9/5) + 32; 
    k_temp = (c_temp + 273.5);
    
    printf("%.2f°C eh equivalente a %.2f°F e a %.2f Kelvin\n", c_temp, f_temp, k_temp);
    
    
    

    return 0;
}
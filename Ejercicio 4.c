/*Arenas Mimbrera Karen Mariel
Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de interes mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendr ́a al finalizar el mes.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    float principal, tasaInteres, montoFinal;
    
    // Solicitar al usuario la cantidad de dinero invertida (principal)
    printf("Ingresa la cantidad de dinero invertido: ");
    scanf("%f", &principal);
    
    // Solicitar al usuario la tasa de interés mensual
    printf("Ingresa la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasaInteres);
    
    // Convertir la tasa de interés de porcentaje a decimal
    tasaInteres = tasaInteres / 100;
    
    // Calcular el monto final
    montoFinal = principal * (1 + tasaInteres);
    
    // Mostrar el monto final
    printf("El monto final después de un mes es: %.2f\n", montoFinal);
    
    return 0;
}


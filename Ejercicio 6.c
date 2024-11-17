/*Arenas Mimbrera Karen Mariel
Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    float sueldo, sueldoConAumento;
    
    // Solicitar al usuario el sueldo del trabajador
    printf("Ingresa el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    // Verificar si el sueldo es inferior a $1,000 o no
    if (sueldo < 1000) 
        {
        // Aumento del 15% si el sueldo es inferior a 1000
        sueldoConAumento = sueldo * 1.15;
        } 
    else 
        {
        // Aumento del 12% si el sueldo es mayor o igual a 1000
        sueldoConAumento = sueldo * 1.12;
        }
    
    // Imprimir el sueldo con el aumento
    printf("El sueldo con el aumento es: %.2f\n", sueldoConAumento);
    
    return 0;
}


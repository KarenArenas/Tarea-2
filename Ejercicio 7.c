/*Arenas Mimbrera Karen Mariel
Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    float sueldo, sueldoConAumento;
    
    // Solicitar al usuario el sueldo del trabajador
    printf("Ingresa el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    // Verificar si el sueldo es inferior a $1,000 o no
    if (sueldo < 1000) }
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

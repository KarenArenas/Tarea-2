/*Arenas Mimbrera Karen Mariel
Construir un diagrama de flujo tal que dado el radio de un cırculo, calcule
e imprima el  ́area y la circunferencia. El ́area del cırculo se calcula como
Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia=2 ∗ π ∗ radio.*/

#include <stdio.h>
#include <math.h> // Para usar la constante M_PI y funciones matemáticas

int main() 
{
    // Declarar una variable para el radio
    float radio, area, circunferencia;
    
    // Solicitar al usuario el valor del radio
    printf("Ingresa el radio del círculo: ");
    scanf("%f", &radio);
    
    // Calcular el área y la circunferencia
    area = M_PI * radio * radio; // Área = π * radio^2
    circunferencia = 2 * M_PI * radio; // Circunferencia = 2 * π * radio
    
    // Imprimir los resultados
    printf("Área del círculo: %.2f\n", area);
    printf("Circunferencia del círculo: %.2f\n", circunferencia);
    
    return 0;
}
  

/*Arenas Mimbrera Karen Mariel
Escriba un diagrama de flujo tal que dado como datos dos numeros y
calcular la suma, resta y multiplicaci ́on de dichos numeros.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables para los dos números
    float num1, num2;
    
    // Solicitar los dos números al usuario
    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);
    
    // Calcular y mostrar la suma, resta y multiplicación
    printf("Suma: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Resta: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplicación: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    
    return 0;
}

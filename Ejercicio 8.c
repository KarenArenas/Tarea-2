/*Arenas Mimbrera Karen Mariel
Construir un diagrama de flujo que pueda determinar, dados dos numeros
enteros, si un numero es divisor del otro.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    int num1, num2;

    // Solicitar al usuario los dos números enteros
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);
    
    // Verificar si num1 es divisor de num2
    if (num2 % num1 == 0) 
        {
        printf("%d es divisor de %d.\n", num1, num2);
        }
    // Verificar si num2 es divisor de num1
    else 
      if (num1 % num2 == 0) 
      {
        printf("%d es divisor de %d.\n", num2, num1);
      } 
    else 
      {
        printf("Ningún número es divisor del otro.\n");
      }

    return 0;
}

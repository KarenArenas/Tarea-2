/*Arenas Mimbrera Karen Mariel
Construya un diagrama de flujo que lea 100 numeros naturales y cuente
cuantos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main() 
{
    int numero;
    int positivos = 0, negativos = 0, nulos = 0;

    // Leer 100 números
    for (int i = 1; i <= 100; i++) 
      {
        printf("Ingresa el número %d: ", i);
        scanf("%d", &numero);

        // Verificar si el número es positivo, negativo o nulo
          if (numero > 0) 
          {
            positivos++;
          } 
          else if (numero < 0) 
          {
            negativos++;
          } 
          else 
          {
            nulos++;
          }
      }

    // Mostrar los resultados
    printf("\nCantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos: %d\n", nulos);

    return 0;
}

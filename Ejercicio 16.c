/*Arenas Mimbrera Karen Mariel
Construir un diagrama de flujo para almacenar en un arreglo unidimensional los 100 primeros numeros pares. 
Imprimir al final el arreglo.*/
#include <stdio.h>

int main() 
{
    int arreglo[100];  // Arreglo para almacenar los 100 primeros números pares
    int i, num = 2;    // 'num' comienza en 2, el primer número par

    // Almacenar los primeros 100 números pares en el arreglo
    for (i = 0; i < 100; i++) 
    {
        arreglo[i] = num;  // Asignar el número par actual al arreglo
        num += 2;           // Incrementar 'num' en 2 para obtener el siguiente número par
    }

    // Imprimir el arreglo de los primeros 100 números pares
    printf("Los primeros 100 números pares son:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%d ", arreglo[i]);  // Imprimir cada número par
    }
    
    printf("\n");  // Salto de línea al final

    return 0;
}

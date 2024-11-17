/*Arenas Mimbrera Karen Mariel
Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros numeros naturales.*/

#include <stdio.h>

int main() 
{
    int N, i = 1;
    long long producto = 1;  // Usamos long long para evitar desbordamientos con números grandes

    // Solicitar al usuario el valor de N
    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    // Verificar que N sea un número positivo
    if (N <= 0) 
    {
        printf("Por favor, ingresa un número natural positivo mayor que 0.\n");
        return 1;  // Terminar el programa si N no es válido
    }

    // Ciclo while para calcular el producto de los N primeros números naturales
    while (i <= N) 
    {
        producto *= i;  // Multiplicar el producto por el número actual (i)
        i++;  // Incrementar i para pasar al siguiente número
    }

    // Imprimir el resultado
    printf("El producto de los primeros %d números naturales es: %lld\n", N, producto);

    return 0;
}

/*Arenas Mimbrera Karen Mariel
Escribir un diagrama de flujo tal que dado como entrada un arreglo unidimensional de enteros, 
obtenga como resultado la suma de los mismos.*/

#include <stdio.h>

int main() 
{
    int n;

    // Solicitar al usuario el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    // Declarar el arreglo de tamaño n
    int arreglo[n];
    int suma = 0;

    // Leer los elementos del arreglo
    printf("Ingresa los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Calcular la suma de los elementos
    for (int i = 0; i < n; i++) 
    {
        suma += arreglo[i];
    }

    // Imprimir el resultado
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}

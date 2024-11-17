/*Arenas Mimbrera Karen Mariel
Escribir un diagrama de flujo tal que dado como entrada un arreglo unidimensional de enteros, 
determinar cuantos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main() 
{
    int n, positivos = 0, negativos = 0, nulos = 0;

    // Solicitar al usuario el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    // Declarar el arreglo de tamaño n
    int arreglo[n];

    // Leer los elementos del arreglo
    printf("Ingresa los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Contar cuántos números son positivos, negativos o nulos
    for (int i = 0; i < n; i++) 
    {
        if (arreglo[i] > 0) 
        {
            positivos++;
        } 
        else if (arreglo[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    // Imprimir los resultados
    printf("\nCantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos: %d\n", nulos);

    return 0;
}

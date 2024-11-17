/*Arenas Mimbrera Karen Mariel
Construya un programa tal que dado como entrada un arreglo unidimensional de enteros y un numero entero, 
determine cuantas veces se encuentra el numero dentro del arreglo.*/

#include <stdio.h>

int main() 
{
    int n, num_buscar, contador = 0;

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

    // Solicitar el número a buscar
    printf("Ingresa el número que deseas buscar: ");
    scanf("%d", &num_buscar);

    // Buscar cuántas veces aparece el número en el arreglo
    for (int i = 0; i < n; i++) 
    {
        if (arreglo[i] == num_buscar) 
        {
            contador++;
        }
    }

    // Imprimir el resultado
    printf("El número %d aparece %d veces en el arreglo.\n", num_buscar, contador);

    return 0;
}

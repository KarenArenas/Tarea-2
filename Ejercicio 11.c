/*Arenas Mimbrera Karen Mariel
Hacer un diagrama de flujo que calcule la suma de los n ́umeros pares
comprendidos entre el 10 y 50.*/
#include <stdio.h>

int main() 
{
    int suma = 0;
    int i = 10; // Empezamos en 10, que es el primer número par

    // Ciclo while para recorrer los números entre 10 y 50
    while (i <= 50) 
    {
        suma += i;  // Sumar el número par a la variable 'suma'
        i += 2;     // Incrementar 'i' de dos en dos (para obtener los números pares)
    }

    // Imprimir el resultado
    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}

/*Arenas Mimbrera Karen Mariel
Haga un diagrama de flujo para obtener la tabla de multiplicar de un
numero entero N, comenzando desde el 1.*/

#include <stdio.h>

int main() 
{
    int N, i;

    // Solicitar al usuario el número para obtener su tabla de multiplicar
    printf("Ingresa un número entero: ");
    scanf("%d", &N);

    // Imprimir la tabla de multiplicar de N (desde 1 hasta 10)
    printf("Tabla de multiplicar de %d:\n", N);
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}

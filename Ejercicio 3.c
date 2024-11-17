*Arenas Mimbrera Karen Mariel
En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1 dolar ↢ 11.96pesos.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    float dolares, pesos;
    const float tipoCambio = 11.96; // Tipo de cambio: 1 dólar = 11.96 pesos
    
    // Solicitar al usuario la cantidad en dólares
    printf("Ingresa la cantidad en dólares: ");
    scanf("%f", &dolares);
    
    // Realizar la conversión
    pesos = dolares * tipoCambio;
    
    // Mostrar el resultado
    printf("%.2f dólares equivalen a %.2f pesos.\n", dolares, pesos);
    
    return 0;
}

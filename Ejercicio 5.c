/*Arenas Mimbrera Karen Mariel
En un negocio de productos electrodom ́esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.*/

#include <stdio.h>

int main() 
{
    // Declarar las variables
    float montoCompra, montoFinal;
    const float descuento = 0.08;  // 8% de descuento
    
    // Solicitar al usuario el monto de la compra
    printf("Ingresa el monto de la compra: ");
    scanf("%f", &montoCompra);
    
    // Verificar si el monto de la compra es mayor a 2500
    if (montoCompra > 2500) 
        {
        // Aplicar el descuento del 8%
        montoFinal = montoCompra - (montoCompra * descuento);
        } 
    else 
        {
        // No aplicar descuento
        montoFinal = montoCompra;
        }
    
    // Mostrar el monto final a pagar
    printf("El monto a pagar es: %.2f\n", montoFinal);
    
    return 0;
}

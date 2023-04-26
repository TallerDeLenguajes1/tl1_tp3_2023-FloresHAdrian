#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *TiposProductos[] = {"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};
struct Producto
{
    int ProductoID;       // Numerado en ciclo iterativo
    int Cantidad;         // entre 1 y 10
    char *TipoProducto;   // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
}typedef Producto;

struct Cliente
{
    int ClienteID;               // Numerado en el ciclo iterativo
    char *NombreCliente;         // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto *Productos          // El tamaño de este arreglo depende de la variable
    // "CantidadProductosAPedir”
}typedef Cliente;

altaClientes(Cliente *clientes, int cant);


int main(int argc, char const *argv[])
{
    int cantClientes=0;
    Cliente *clientes;

    printf("\n\n-- Punto 3 --\n\n");
    printf("Ingrese la cantidad de clientes:");
    scanf("%d",&cantClientes);

    altaClientes(clientes,cantClientes);
    return 0;


}

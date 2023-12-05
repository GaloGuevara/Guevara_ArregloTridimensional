/*Crear e imprimir todos los elementos de un arreglo tridimensional, cuyas dimensiones sean ingresadas por el usuario. El programa que debe inicializar todas las matrices
del arreglo en ceros, a excepción de la última matriz que debe ser inicializada en unos*/
#include <stdio.h>
#include <time.h>

void InicializarEnCeros3D(int n, int m, int l, int a[n][m][l]);
void MostrarArreglo(int n, int m, int l, int a[n][m][l]);

int main(int argc, char const *argv[])
{
    int n, m, l; // n es el numero de matrices, m el numero de filas de cada matri y l el numero de columnas de cada matriz
    printf("Ingrese cuantas matrices desea: ");
    scanf("%d%*c", &n);
    printf("Ingrese las dimensiones de las filas de las matrices: ");
    scanf("%d%*c", &m);
    printf("Ingrese las dimensiones de las columnas de las matrices: ");
    scanf("%d%*c", &l);

    // Suponiendo que el tipo de datos del arreglo son enteros
    int ArregloTridimensional[n][m][l];

    // Inicializamos todo el arreglo en ceros
    InicializarEnCeros3D(n, m, l, ArregloTridimensional); //Llamada a la función

    // Cambiamos los elementos de la ultima matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                if (i == n - 1) // Aqui seleccionamos la ultima matriz
                {
                    ArregloTridimensional[i][j][k] = 1;
                }
            }
        }
    }

    MostrarArreglo(n, m, l, ArregloTridimensional); //Llamada a la función

    return 0;
}

void InicializarEnCeros3D(int n, int m, int l, int a[n][m][l])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                a[i][j][k] = 0;
            }
        }
    }
}

void MostrarArreglo(int n, int m, int l, int a[n][m][l])
{
    // Imprimimos las matrices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
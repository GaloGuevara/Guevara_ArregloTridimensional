/*Crear e imprimir todos los elementos de un arreglo tridimensional, cuyas dimensiones sean ingresadas por el usuario. El programa que debe inicializar todas las matrices
del arreglo en ceros, a excepción de la última matriz que debe ser inicializada en unos*/
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n, m, l;
    printf("Ingrese las dimensiones del primer arreglo: ");
    scanf("%d%*c", &n);
    printf("Ingrese las dimensiones del segundo arreglo: ");
    scanf("%d%*c", &m);
    printf("Ingrese las dimensiones del tercer arreglo: ");
    scanf("%d%*c", &l);

    // Suponiendo que el tipo de datos del arreglo son enteros
    int ArregloTridimensional[n][m][l];

    // Inicializamos todo el arreglo en ceros
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                ArregloTridimensional[i][j][k] = 0;
            }
        }
    }

    // Cambiamos los elementos de la ultima matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                if (i == n - 1)
                {
                    ArregloTridimensional[i][j][k] = 1;
                }
            }
        }
    }

    // Imprimimos las matrices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                printf("%d\t", ArregloTridimensional[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

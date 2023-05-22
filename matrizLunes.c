#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[1][1];
    int dimensionColumnas, dimensionFilas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &dimensionFilas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &dimensionColumnas);

    srand((unsigned int)1234); // Semilla constante para generar los mismos números aleatorios

    generarMatrizTraspuesta(dimensionFilas, dimensionColumnas); // Llama a la función para generar y mostrar la matriz original y traspuesta

    return 0;

    printf("Matriz Original:\n");
    for (int i = 0; i < dimensionFilas; i++)
    {
        for (int j = 0; j < dimensionColumnas; j++)
        {
            matriz[j][i] = rand() % 101; // Genera números aleatorios entre 0 y 100
            printf("%d ", matriz[j][i]); // Imprime la matriz original
        }
        printf("\n");
    }

    printf("\nMatriz Traspuesta:\n");
    for (int i = 0; i < dimensionColumnas; i++)
    {
        for (int j = 0; j < dimensionFilas; j++)
        {
            printf("%d ", matriz[i][j]); // Imprime la matriz traspuesta
        }
        printf("\n");
    }
}

#include <stdio.h>
#define max 100
 //La matriz debe contener numeros entre el 0 y el 100
int main(int argc, char const *argv[])
{
    int Matriz[max][max];
    int f, c;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &f);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &c);

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Ingrese los valores de la matriz [%d][%d]: ",i+1, j+1);
            scanf("%d\n", &Matriz[i][j]);
        }
        
    } 
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n\n");
    }
   
   int Matriz2[max][max];
   for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", Matriz2[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
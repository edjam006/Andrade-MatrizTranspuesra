#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int a,b;
    printf("Ingrese el numero de filas de la matriz\n");
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de la matriz\n");
    scanf("%d", &b);
    int matriz[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            matriz[i][j] = rand() % 101; 
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n"); 
    }
    int transpuesta [b][a];
    printf("\n"); 
    printf("La matriz transpuesta es: \n"); 
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            transpuesta[i][j] = matriz[j][i];
            printf("%d\t", transpuesta[i][j]);
        }
        printf("\n");
    }
   
    
    return 0;
}

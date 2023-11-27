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
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            
        }
        
    }
    
    
    return 0;
}

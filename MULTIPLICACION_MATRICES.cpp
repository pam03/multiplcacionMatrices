#include <stdio.h>
#include <math.h>


#define FILAS_MATRIZ_A 5
#define COLUMNAS_MATRIZ_A 5
#define FILAS_MATRIZ_DEF 5
#define COLUMNAS_MATRIZ_DEF 5





int potencia=3;


int main(void) {

    int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
 			{0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1},
            {0, 1, 0, 1, 1},
			{1, 0, 1, 0, 0},
			{0, 1, 1, 0, 0},
			
           
    };
   
   
    int matrizDef[FILAS_MATRIZ_DEF][COLUMNAS_MATRIZ_DEF] = {
            {0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1},
            {0, 1, 0, 1, 1},
			{1, 0, 1, 0, 0},
			{0, 1, 1, 0, 0},
			
			
            
			
    };
   
    
    int producto[FILAS_MATRIZ_DEF][COLUMNAS_MATRIZ_DEF];
   /*nt final[FILAS_MATRIZ_FINAL][COLUMNAS_MATRIZ_FINAL];*/
    
   
    for (int a = 0; a < COLUMNAS_MATRIZ_DEF; a++){
	
    	
    	
        
        for (int i = 0; i < FILAS_MATRIZ_A; i++) {
            int suma = 0;
           
            for ( int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                
                suma += matrizA[i][j] * matrizA[j][a];
            }
            
            producto[i][a] = suma;
            
        }
        
   
    } 
	

    printf("Imprimiendo producto\n");
    for (int i = 0; i < FILAS_MATRIZ_DEF; i++){
        for (int j = 0; j < COLUMNAS_MATRIZ_DEF; j++){
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }


   
    
}









#include <stdio.h>
#include <math.h>
#include <string.h>

#define FILAS_MATRIZ 7
#define COLUMNAS_MATRIZ 7

//0 == infinito
int matrizA[FILAS_MATRIZ][COLUMNAS_MATRIZ] = {
  {0, 2, 2, 0, 0, 8, 6},
  {2, 0, 6, 2, 3, 3, 0},
  {2, 6, 0, 3, 0, 0, 4},
  {0, 2, 3, 0, 1, 0, 2},
  {0, 3, 0, 1, 0, 1, 0},
  {8, 3, 0, 0, 1, 0, 5},
  {6, 0, 4, 2, 0, 5, 0}

};
int matrizB[FILAS_MATRIZ][COLUMNAS_MATRIZ];

int producto[FILAS_MATRIZ][COLUMNAS_MATRIZ];
int potencia = 0;


void imprimirMatriz(int matriz[FILAS_MATRIZ][COLUMNAS_MATRIZ] ){
  for (int i = 0; i < FILAS_MATRIZ; i++){
      for (int j = 0; j < COLUMNAS_MATRIZ; j++){
          printf("%d\t", matriz[i][j]);
      }
      printf("\n");
  }
  printf("\n");
}

int min(int arreglo[FILAS_MATRIZ]){
  int min = arreglo[0];
  for (int i = 0; i < FILAS_MATRIZ; i++) {
    if(arreglo[i] < min && arreglo[i] > 0)
      min = arreglo[i];
  }
  return min;
}


int main(int argc, char* argv[]) {

  if(argc == 1)//Si no hay argumentos solo hace matriz cuadrada
    potencia = 2;
  else
    potencia = atoi(argv[1]);
   /*nt final[FILAS_MATRIZ_FINAL][COLUMNAS_MATRIZ];*/

  memcpy(matrizB,matrizA, FILAS_MATRIZ * COLUMNAS_MATRIZ * sizeof(int));

  for(int p = 1; p < potencia; p++){//cantidad de potencias
    for (int a = 0; a < COLUMNAS_MATRIZ; a++){

      for (int i = 0; i < FILAS_MATRIZ; i++){
        int sumas[FILAS_MATRIZ];

        for ( int j = 0; j < COLUMNAS_MATRIZ; j++){

            sumas[j] = matrizA[i][j] * matrizB[j][a];//aqui!!
        }
        producto[i][a] = min(sumas);
      }
    }
    memcpy(matrizB,producto, FILAS_MATRIZ * COLUMNAS_MATRIZ * sizeof(int));

  }
  printf("Matriz ^ %d\n",potencia);
  imprimirMatriz(producto);
  /*printf("MatrizA\n");//se puede borrar
  imprimirMatriz(matrizA);
  printf("MatrizB\n");
  imprimirMatriz(matrizB);*/


  return 0;
}

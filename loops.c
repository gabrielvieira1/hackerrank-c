#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int n;
 scanf("%d", &n);

 int tam = n + (n - 1);

 int **matriz = malloc(sizeof(int *) * tam);

 for (int i = 0; i < tam; i++)
 {
  matriz[i] = malloc(sizeof(int *) * tam);
 }

 for (int c = 0; c < n; c++)
 {
  for (int i = c; i < tam - c; i++)
  {
   for (int j = c; j < tam - c; j++)
   {
    matriz[i][j] = n - c;
   }
  }
 }

 for (int i = 0; i < tam; i++)
 {
  for (int j = 0; j < tam; j++)
  {
   printf("%d ", matriz[i][j]);
  }
  printf("\n");
 }

 free(matriz);

 return 0;
}
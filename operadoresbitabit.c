#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
 unsigned int maxAND, maxOR, maxXOR, result;
 maxAND = maxOR = maxXOR = 0;

 for (int i = 1; i <= n; i++)
 {
  for (int j = i + 1; j <= n; j++)
  {
   result = i & j;
   if (result > maxAND && result < k)
    maxAND = result;

   result = i | j;
   if (result > maxOR && result < k)
    maxOR = result;

   result = i ^ j;
   if (result > maxXOR && result < k)
    maxXOR = result;
  }
 }

 printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);
}

int main()
{
 int n, k;
 scanf("%d %d", &n, &k);
 calculate_the_maximum(n, k);
 return 0;
}

/*
Você receberá um inteiro n e um limite, k. Para cada número i de 1 a n,
encontre o valor lógico máximo do and, or e xor quando comparado com todos os inteiros até n que
são maiores que i.

Considere um valor somente se a comparação retornar um resultado menor que k.

Imprima os resultados do e, ou e exclusivo ou das comparações em linhas separadas, nessa ordem.
*/
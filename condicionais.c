#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  char dias[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  for (int i = a; i <= b; i++)
  {
    if (i >= 1 && i <= 9)
    {
      printf("%s", dias[i - 1]);
    }
    else if ((i % 2) == 0)
    {
      printf("even");
    }
    else
    {
      printf("odd");
    }
    printf("\n");
  }
  return 0;
}
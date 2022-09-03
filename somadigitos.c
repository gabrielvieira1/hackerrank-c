#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d", &n);

int result = 0;

while(n>0)
{
 result += n%10; // Obtem numero na base 10 andando com a virgula
 n = n/10;
}

printf("%d\n", result);


return 0;
}
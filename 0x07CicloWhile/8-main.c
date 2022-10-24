#include <stdio.h>

int main()
{
int i, n;
  
printf("Hasta que numero quieres contar?: ");
scanf("%d", &n);

printf("Todos los números pares del 1 al %d son: \n", n);

i=1;
while(i<=n)
{
  
if(i%2==0)
{
printf("%d\n", i);
}

i++;
}

return 0;
}
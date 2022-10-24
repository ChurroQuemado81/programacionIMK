#include <stdio.h>

int main()
{
int i, end;

printf("Hasta que numero quiere contar? : ");
scanf("%d", &end);
i=1;
while(i<=end)
{
printf("%d\n", i);
i++;
}

return 0;
}
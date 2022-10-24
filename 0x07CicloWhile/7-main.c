#include <stdio.h>

int main()
{
char ch = 'a';

printf("Los alfabetos de la a a la z son: \n");
while(ch<='z')
{
printf("%c\n", ch);
ch++;
}

return 0;
}
#include <stdio.h>
int main()
{
int n, sum=0, firstDigit, lastDigit;
printf("Ingrese un número para realizar la suma del primer y último dígito = ");
scanf("%d", &n);
lastDigit = n % 10;
while(n >= 10)
{
n = n / 10;
}
firstDigit = n;
sum = firstDigit + lastDigit;
printf("Suma del primer y ultimo digito = %d", sum);
return 0;
}

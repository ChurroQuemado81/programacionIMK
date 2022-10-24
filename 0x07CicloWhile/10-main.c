#include <stdio.h>
int main() {
int n, i, sum = 0;
printf("Introduzca un número entero positivo: ");
scanf("%d", &n);
i = 1;

while (i <= n) {
sum += i;
++i;
}

printf("Sum = %d", sum);
return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
float a = 0, b = 0, c = 0, perimetro = 0;
float area = 0;
float sp = 0;

printf("introduce el lado a del triangulo\n");
scanf("%f",&a);
printf("introduce el lado b del triangulo\n");
scanf("%f",&b);
printf("introduce el lado c del triangulo\n");
scanf("%f",&c);

if(a + b > c && a + c > b && c + b > a)
{
perimetro = a + b + c; 
sp = perimetro/2;
area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));

printf("el perimetro es igual a %f\n", perimetro);
printf("el area es igual a %f\n", area);
}
else{
    printf("el triangulo no existe\n");
}


}
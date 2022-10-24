#include <stdio.h>

// Un litro equivale a 0.264179 galones.//

int main(){
int litgas = 0, millas = 0;
float galon = 1, final = 0;
do{
printf("ingresa los litro de gasolina usados\n");
scanf("%d",&litgas);

printf("ingresa las millas recorridas\n");
scanf("%d",&millas);

galon = litgas * .264179;
final = millas / galon;

printf("el carro da %f galones por %d millares recorridas\n", galon, millas);
printf("da un rendimiento de %f galones por milla\n", final);
printf("para terminar el programa ingrese ceros\n");
}
while(litgas != 0 && millas != 0);
}
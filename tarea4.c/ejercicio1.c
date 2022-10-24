#include<stdio.h>
#include<stdlib.h>

int main() {
	float gallones = 1;
	float milles = 0;
	float overallGallons = 0;
	float overallMilles = 0;
	printf("ingresa los litros  de que  gasolina que usaste: ");
	scanf("%f",&gallones);
	while (gallones != -1) {
		printf("ingrese el numero de millas que consumiste: ");
		scanf("%f", &milles);
		if (gallones != 0) {
			printf("Las millas/galón de este tanque fueron : %.4f\n", milles / gallones);
			overallGallons += gallones;
			overallMilles += milles;
		}
		printf("ingresa los galones usados ");
		scanf("%f", &gallones);
	}

	printf("El promedio  de millas/galón fue:  %.4f\n", overallMilles / overallGallons);
	system("pause");
	return 1;
}
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Ingrese el número de filas: ");
    scanf("%d", &n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
       
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

       
        for(j=1; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

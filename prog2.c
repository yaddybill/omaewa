#include<stdio.h>
#include<stdlib.h>
void main()
{
    int array[50][50];
    int n,m,i,j;
    printf("Nr de linii: ");
    scanf("%d", &m);
    printf("Nr de coloane: ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j]=rand()%100-rand()%100;
        }
    }
    for (int i=0; i<n; i++)
    {
        printf("\n");
        for (int j=0; j<m; j++)
        {
            printf("%d\t", array[i][j]);
        }
    }
    int Suma=0;
    for (int i = 0 ; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Suma=Suma+array[i][j];
        }
    }
    printf("\nSuma este %d", Suma);
}

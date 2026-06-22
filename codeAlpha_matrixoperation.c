#include<stdio.h>

int a[10][10], b[10][10], c[10][10];
int r, col, i, j, k;

void addition()
{
    printf("\nAddition of Matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

void multiplication()
{
    printf("\nMultiplication of Matrices:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;

            for(k=0;k<col;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

void transpose()
{
    printf("\nTranspose of Matrix A:\n");

    for(i=0;i<col;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter rows and  of matrices: ");
    scanf("%d",&r);
    printf("Enter rows and  of column: ");
    scanf("%d",&col);

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    addition();
    multiplication();
    transpose();

    return 0;
}
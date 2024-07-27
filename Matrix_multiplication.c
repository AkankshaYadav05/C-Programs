// Multiply two matrices
#include<stdio.h>
void main()
{
    int i,j,k,a[5][5],b[5][5],mult[5][5]={0};
    int r,c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    printf("Enter elements of matrix A:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix B:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           for(k=0;k<c;k++)
            {
                mult[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of two matrices is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d\t", mult[i][j]);
        }
        printf("\n");
    }
}

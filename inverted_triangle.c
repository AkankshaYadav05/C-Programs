// Program for inverted triangle
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d", j);
        }
        printf("\n");
    }
}

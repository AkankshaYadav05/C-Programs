// program for pattern
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }

}

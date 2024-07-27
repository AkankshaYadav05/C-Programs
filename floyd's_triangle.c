// Program for Floyd's triangle
#include<stdio.h>
void main()
{
    int n,i,j,n2=1;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",n2);
            n2++;
        }
        printf("\n");
    }
}

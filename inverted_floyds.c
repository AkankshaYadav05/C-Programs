// Program for inverted Floyd's triangle
#include<stdio.h>
void main()
{
    int n,i,j,n2=10;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",n2);
            n2--;
        }
        printf("\n");
    }
}

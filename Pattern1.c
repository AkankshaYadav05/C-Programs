#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       for(j=0;j<=n-i-1;j++)
       {
           printf(" ");
       }
       for(k=0;k<=i;k++)
       {
           printf("* ");
       }
       printf("\n");
    }
}

// program to print triangle pattern
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
          printf("\t*");
        }
        printf("\n");

    }

}

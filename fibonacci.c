// Program to print a fibonacci series
#include<stdio.h>
void main()
{
    int n,i,n3;
    int n1=0,n2=1;
    printf("Enter number upto which we want fibonacci series:");
    scanf("%d", &n);
    printf("%d", n1);
    printf("\t%d", n2);
    while(i<=n)
    {
        n3=n1+n2;
        printf("\t%d", n3);
        n1=n2;
        n2=n3;
        i++;


    }

}

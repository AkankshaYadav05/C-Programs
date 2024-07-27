//Program for printing Armstrong number
#include<stdio.h>
void main()
{
    int n,rem,org,Armst=0;
    printf("Enter three digit number:");
    scanf("%d", &n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        Armst=Armst+(rem*rem*rem);
        n=n/10;
    }
    if(org==Armst)
    {
        printf("It is an Armstrong number");
    }
    else
    {
       printf("It is not an Armstrong number");
    }
}

// Program to check  palindrome number
#include<stdio.h>
void main()
{
    int n,rev=0,rem;
    int org;
    printf("Enter a number:");
    scanf("%d", &n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(org==rev)
    {
        printf("It is a palindrome number");
    }
    else
        printf("It is not a palindrome number");
}

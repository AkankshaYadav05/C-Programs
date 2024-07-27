// Program to print numbers in descending order
#include<stdio.h>
void main()
{
    int num[5],i,j,temp;
    printf("Enter five numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(num[j]>num[i])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }

    }
    printf("Array is in descending order:\n");
    for(i=0;i<5;i++)
    {
        printf("\t%d", num[i]);
    }
}

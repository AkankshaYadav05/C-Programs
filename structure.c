//Program to print 3 students details using structure
#include<stdio.h>
struct student{
int roll;
char name[25]    h+++;
}S[20];
void main(){
 int i;
 printf("Enter 3 students detail:\n");
 for(i=0;i<3;i++)
    {
        printf("Enter roll no. of a student:");
        scanf("%d", &S[i].roll);
        printf("Enter name of a student:");
        scanf("%s", &S[i].name);
    }
    printf("Three students details are:\n");
    for(i=0;i<3;i++)
    {
        printf("Roll no.= %d\n", S[i].roll);
        printf("Name= %s\n", S[i].name);
    }
 }

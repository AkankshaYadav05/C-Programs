// To print size of union
#include<stdio.h>
union emp_union{
 int emp_id;
 char emp_name[20];
 }E;
 struct emp{
  int emp_id;
  char emp_name[20];
  }e;
 int main()
 {
     printf("Size of union is: %d\n", sizeof(E));
     printf("Size of structure is : %d", sizeof(e));
     return 0;
 }

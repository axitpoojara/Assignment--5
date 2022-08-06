//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,num;
    printf(" enter any number: ");
    scanf("%d",&num);
    printf(" this is  first %d even natural numbers : ",num);
    for(i=1;i<=num;i++)
       printf("\n %d",(i*2));
    return 0;
}
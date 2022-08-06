//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,num;
    printf(" Enter any number :");
    scanf("%d",&num);
    printf(" this is first %d natural numbers in reverse order ",num);
    for(i=num;i>=1;i--)
        printf(" \n %d",i);
    return 0;
}
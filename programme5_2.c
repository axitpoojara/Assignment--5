//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int i,num;
    printf(" Enter any number :");
    scanf("%d",&num);
    printf(" this is  first %d natural numbers.",num);
    for(i=1;i<=num;i++)
        printf("\n %d",i);
    return 0;


}
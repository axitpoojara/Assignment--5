//1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i, num;
    printf(" Enter any number :");
    scanf("%d",&num);
    printf("this is to print MySirG %d times on the screen",num);
    for( i=1;i<=num;i++)
        printf("\n MySirG");
    return 0;


}
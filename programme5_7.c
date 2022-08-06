//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,num;
    printf(" enter any number :");
    scanf("%d",&num);
    printf("this is  first  %d even natural numbers in reverse order",num);
    for(i=num;i>=1;i--)
        printf("\n %d",(i*2));
    return 0;
}
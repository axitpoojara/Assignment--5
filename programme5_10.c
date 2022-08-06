//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter any number : ");
    scanf("%d",&num);
    printf(" this is a table of %d",num);
    for(i=1;i<=10;i++)
        printf("\n %d * %d = %d",num,i,(num*i));
    return 0;
}
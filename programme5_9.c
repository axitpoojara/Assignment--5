//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,num;
    printf(" enter any number :");
    scanf("%d",&num);
    printf("this is cubes of first %d natural numbers",num);
    for(i=1;i<=num;i++)
        printf("\n %d",(i*i*i));
    return 0;

}
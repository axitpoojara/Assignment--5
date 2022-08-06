//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,num;
    printf(" entr any number :");
    scanf("%d",&num);
    printf(" this is first %d odd natural numbers in reverse order: ",num);
    for(i=num;i>=1;i--)
        printf("\n %d",(i*2-1));
    return 0;

}
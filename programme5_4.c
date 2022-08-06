//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter any number :");
    scanf("%d",&num);
    printf(" this is  first %d odd natural numbers ",num);
    for(i=1;i<=num;i++)
        printf("\n %d",(i*2-1));
    return 0;        
}

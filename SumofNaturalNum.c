#include<stdio.h>

int sum(int n)
{
    if(n>0)
    {
        return(n+sum(n-1));
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the limit :");
    scanf("%d",&num);
    printf("Sum of natural number till %d is %d ",num,sum(num));
    return 0;
}

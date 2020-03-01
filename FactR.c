#include<stdio.h>

int Fact(int n)
{
    if(n>0)
    {
        return(n*Fact(n-1));
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the limit :");
    scanf("%d",&num);
    printf("Fact of natural number till %d is %d ",num,Fact(num));
    return 0;
}

#include<stdio.h>

int  fibbonacci(int limit)
{
    if ( limit==0 )
        return 0;
    else if (limit == 1)
        return 1;
    else 
        return (fibbonacci(limit -1)+fibbonacci(limit-2));
}
int main()
{
    int n = 7;
    printf("fibonacci series for limit %d\n",n);
    for (int i = 0 ; i <=n ; i++)
    {
        printf("%d ",fibbonacci(i));
    }
    return 0;
}

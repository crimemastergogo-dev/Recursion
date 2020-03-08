#include<stdio.h>
int combination(int n, int r)
{
    if ( r == 0 || n == r)
        return 1;
    else
        return combination(n-1,r-1)+combination(n-1,r);

}

int main()
{
    int n = 4,r =2;
    printf("combiantion of %d and %d is %d",n,r,combination(n,r));
    return 0;
}

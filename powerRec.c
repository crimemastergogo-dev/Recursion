#include<stdio.h>

int powRec(int x,int y)
{
    if(y==0)
        return 1;
    return powRec(x,y-1)*x;
}
int main()
{

    int n = 2,m=3;
    printf("Power of %d to %d is %d",n,m,powRec(n,m));
    return 0;
}

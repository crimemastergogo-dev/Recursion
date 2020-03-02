#include<stdio.h>

int powRec(int x,int y)
{
    if(y==0)
        return 1;
    if(y%2==0)
        return powRec(x*x,y/1);
    else
        return x*powRec(x*x,(y-1)/2);
}
int main()
{

    int n = 2,m=3;
    printf("Power of %d to %d is %d",n,m,powRec(n,m));
    return 0;
}

#include<stdio.h>

int funS(int n)
{
    if(n>0)
    {
        return funS(n-1)+n;
    }
    return 0;
}
int funG(int n)
{
    static int x = 0;
    if(n>0)
    {
        x++;
        return funG(n-1)+x;
    }
    return 0;
}

int main()
{

    int a = 5;
    printf("Static recursive call result: %d\n",funS(a));
    printf("Global recursive call result: %d\n",funG(a));
    return 0;
}

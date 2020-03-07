#include<stdio.h>

double taylorSer(int x,int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return(1);
    else
    {
        r = taylorSer(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }

}

int main ()
{
    printf("Taylor's series via slow approach %f",taylorSer(1,10));
    return 0;
}

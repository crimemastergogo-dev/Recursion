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


double taylorSerHomerRule(int x,int n)
{
    static double result = 1;
    if (n == 0)
        return result;
    result = 1+x*result/n;
    return taylorSerHomerRule(x,n-1);
}

int main ()
{
    printf("Taylor's series via slow approach %1f\n",taylorSer(1,10));
    printf("Taylor's series via Homer's rule %1f\n",taylorSerHomerRule(1,10));
    return 0;
}

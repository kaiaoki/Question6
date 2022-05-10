#include <stdio.h>
#include <math.h>

double f(double x);
double df(double x);
double newton(double xn);


void main(void)
{
    double Ans1,Ans2,x1=10.0,x2=-10.0;
    Ans1=newton(x1);
    Ans2=newton(x2);
    printf("%lf %lf\n",Ans1,Ans2);
}
double f(double x)
{
    return pow(x,2)-4;
}

double df(double x)
{
    return 2*x;
}

double newton(double xn)
{
    double yn,an,xn1;
    yn=f(xn);
    if(fabs(yn)<0.0000001)
    {
        return xn;
    }
     an=df(xn);
     xn1=xn-yn/an;
     
     return newton(xn1);
     
}




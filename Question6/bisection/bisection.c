#include <stdio.h>
#include <math.h>
double f(double x);

int main()
{
   int n,conv=0,N=100;
   double a0=0.0,b0=3.0,c0=-3.0,an,bn,cn,xn,delta=1.0e-12; 
   
   an=a0;
   bn=b0;
   
   for(n=0;n<N;n++)
   {
       xn=(an+bn)/2.0;
       
       if((fabs(bn-an)<delta)||(f(xn)==0))
       {
           conv=1;
           break;
       }
       if(f(an)*f(xn)>0)
       {
           an=xn;
       }
       else
       {
           bn=xn;
       }
   }
   
   if(conv==1)
   {
       printf("%d回の計算が行われました。\n",n+1);
   }
   else
   {
       printf("ERROR.\n");
   }
   
   printf("%lf\n",xn);
   
   a0=0.0;
   an=a0;
   cn=c0;
   
   for(n=0;n<N;n++)
   {
       xn=(an+cn)/2.0;
       
       if((fabs(cn-an)<delta)||(f(xn)==0))
       {
           conv=1;
           break;
       }
       if(f(an)*f(xn)>0)
       {
           an=xn;
       }
       else
       {
           cn=xn;
       }
   }
   
   if(conv==1)
   {
       printf("%d回の計算が行われました。\n",n+1);
   }
   else
   {
       printf("ERROR.\n");
   }
   
   printf("%lf\n",xn);
   
}

double f(double x)
{
    return pow(x,2)-4;
}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     int n=3,count=1;
     double sum,term;
     sum=1;
     float sign=-1.0;
     do
     {
       term=sign/n;
       sum=sum+term;
       n+=2;
       sign=-sign;
       count++;
     }while(fabs(term)>=1e-4);
     sum=sum*4;
     printf("%f %d",sum,count);
    return 0;
}

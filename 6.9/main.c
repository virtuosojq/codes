#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double sum,term;
    int count=1;
    int n=1;
    sum=1;
    term=1.0;
    while(fabs(term)>=1e-5)
    {
        term=term/n;
        sum=sum+term;
        n++;
        count++;
    }
    printf("%f %d",sum,count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    double sum=max;
    double rate;
    int count=0;
    scanf("%lf",&rate);
    while(sum<2*max)
    {
        sum=sum+sum*rate;
        count++;
    }
    printf("%d",count);
    return 0;
}

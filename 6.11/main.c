#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long i,n,term=1,sum=0;
    scanf("%lu",&n);
    for(i=1; ;i++)
    {
        term=term*i;
        sum=sum+term;
        if(sum>=n)
        {
          break;
        }
    }
    printf("%lu",i-1);
    return 0;
}

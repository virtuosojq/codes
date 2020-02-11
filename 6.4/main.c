#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d;
    long k2,k3;
    scanf("%d",&d);
    for(int i=1;i<=d;i++)
    {
        k2=pow(i,2);
        k3=pow(i,3);
        printf("%ld %ld\n",k2,k3);
    }
    return 0;
}

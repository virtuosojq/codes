#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a2,a1,a0;
    scanf("%d",&a);
    if(a<0)
    {
        a=(-a);
    }
    a2=a/100;
    a1=a/10%10;
    a0=a%10;
    int b=a0*100+a1*10+a2;
    printf("%d",b);
}

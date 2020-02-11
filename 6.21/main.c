#include <stdio.h>
#include <stdlib.h>

int main()
{
    //关键在于只要有一个开始计数，另一个就不能计数
    int n=0,t;
    for(t=0;t<=140;t++)
    {
        if(t%5==0&&t<=20*5)
        {
            n++;
            continue;
        }
        if(t%6==0&&t<=20*6)
        {
            n++;
            continue;
        }
        if(t%7==0)
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}

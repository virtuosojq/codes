#include <stdio.h>
#include <stdlib.h>

#define rate 0.01875
#define capital 1000
//�������Ʒ�����������ϵ
int main()
{
    double deposit=0.0;
    for(int i=0;i<5;i++)
    {
        deposit=(deposit+1000)/(1+rate*12);
    }
    printf("%lf",deposit);
    return 0;
}

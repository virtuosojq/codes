#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�ؼ�����ֻҪ��һ����ʼ��������һ���Ͳ��ܼ���
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

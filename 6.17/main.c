#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<20;j++)
        {
            k=50-i-j;
            if(i*10+j*5+k==100)
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(x=0;x<=98;x++)
    {
        for(y=0;y<=98;y++)
        {
            if(x+y==98&&x*2+y*4==386)
            {
                printf("%d %d",x,y);
            }
        }
    }
    return 0;
}

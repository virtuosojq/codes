#include <stdio.h>
#include <stdlib.h>

int main()
{
    int man,wom,chi;//此处认为男人，女人，小孩都有
    for(man=1;man<16;man++)
    {
        for(wom=1;wom<25;wom++)
        {
            chi=30-man-wom;
            if(man*3+wom*2+chi*1==50)
            {
                printf("%d %d %d\n",man,wom,chi);
            }
        }
    }
    return 0;
}

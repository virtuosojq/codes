#include <stdio.h>
#include <stdlib.h>

int main()
{
    int term;
    int first,second,third,four;
    for(int i=33;i<100;i++)
    {
        term=i*i;
        first=term/1000;
        second=term/100%10;
        third=term/10%10;
        four=term%10;
        if(first==second&&third==four&&first!=four)
        {
            printf("the car number is %d",term);
        }
    }
    return 0;
}

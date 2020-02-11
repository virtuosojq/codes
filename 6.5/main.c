#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("»ªÊÏÎÂ¶È    ÉãÊÏÎÂ¶È\n");
    for(int F=0;F<=300;F+=10)
    {
        C=5.0/9*(F-32);
        printf("%d            %.2f\n",F,C);
    }

    return 0;
}

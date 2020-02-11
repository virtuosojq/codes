#include <stdio.h>
#include <stdlib.h>

int main()
{
    double toRich,toS;
    toRich=0;
    toS=0;
    double term=0.01;
    for(int i=0;i<30;i++)
    {
        toRich+=100000;
        toS+=term;
        term=term*2;
    }
    printf("to rich %f yuan,to stranger %f yuan",toRich,toS);
    return 0;
}

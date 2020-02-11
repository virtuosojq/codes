#include <stdio.h>
#include <stdlib.h>

void method1();
void method2();
void method3();

int main()
{
    printf("Please enter 1 2 or 3 to select which way you want to use:");
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1:method1();
               break;
        case 2:method2();
               break;
        case 3:method3();
               break;
        default:return 0;
    }
    return 0;
}

void method1()
{
    for(int i=1;i<=9;i++)
    {
        printf("%d ",i);
    }
    putchar('\n');
    for(int i=1;i<=9;i++)
    {
        printf("_ ");
    }
    putchar('\n');
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            printf("%4d ",i*j);
        }
        putchar('\n');
    }

}

void method2()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}

void method3()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<i*4-4;j++)
        {
            printf(" ");
        }
        for(int k=i;k<10;k++)
        {
            printf("%4d",i*k);
        }
        printf("\n");
    }
}

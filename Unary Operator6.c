#include<stdio.h>
int main()
{
    int x=10;

    int y = x--;//y=10, x=9
    printf("%d\n",x);
    printf("%d\n",y);
}

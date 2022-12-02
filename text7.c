#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter centigrade : ");
    scanf("%f",&C);

    F = (C * 1.8) + 32;
    printf("Faren : %f",F);
    return 0;
}

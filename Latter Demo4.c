#include<stdio.h>
int main()
{
    char lower, upper;

    printf("Enter any uppercases latter : ");
    scanf("%c",&upper);

    lower = tolower(upper);//toupper a library function

    printf("The lowercases latter : %c",lower);
    return 0;
}

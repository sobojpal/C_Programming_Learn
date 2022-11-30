#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter any lowercases latter : ");
    scanf("%c",&lower);

    upper = toupper(lower);

    printf("The uppercases latter : %c",upper);
}

#include <stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf(" sum is : %d \n average is : %f",sum,avg);
    return 0;

}

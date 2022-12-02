 #include<stdio.h>
 int main()
 {
     float base, height, area ;
     printf("Enter base : ");
     scanf("%f", &base);

     printf("Enter hight : ");
     scanf("%f", &height);

     area = 0.5 * base * height;
     printf("Area of triangle : %f\n",area);
     return 0;
 }

 #include<stdio.h>
 int main()
 {
     float base, hight, area ;
     printf("Enter base : ");
     scanf("%f", &base);

     printf("Enter hight : ");
     scanf("%f", &hight);

     area = 0.5 * base * hight;
     printf("Area of triangle : %f\n",area);
     return 0;
 }

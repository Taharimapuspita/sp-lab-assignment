#include<stdio.h>
int main(){


float length,width,area,perimeter;
printf("Enter the length of the Rectangle:");
scanf("%f",&length);


printf("Enter the width of the Rectangle:");
scanf("%f",&width);


area=length*width;
perimeter=2*(length+width);


printf("Area of the Rectangle:%.2f\n",area);
printf("Perimeter of the Rectangle:%.2f\n",perimeter);

return 0;

}

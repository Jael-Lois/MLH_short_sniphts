#include<stdio.h>
#include<math.h>
int main()
{
  float a1,a2,b1,b2;
  printf("Enter the coordinate of city A (x): ");
  scanf("%f",&a1);
  printf("Enter the coordinate of city A (y): ");
  scanf("%f",&a2);
  printf("Enter the coordinate of city B (x): ");
  scanf("%f",&b1);
  printf("Enter the coordinate of city B (y): ");
  scanf("%f",&b2);
  printf("The distance between the cities A and B : %.2f km",sqrt(((a1-b1)*(a1-b1)) + ((a2-b2)*(a2-b2))));
}

#include<stdio.h>
int main()
{
  //  pi = 4 * (1 - (1/3) + (1/5) - (1/7) + (1/9) - (1/11) + ... )
  int a,i,sign;
  double sum;
  printf("The Nth number of a pi : ");
  scanf("%d",&a);
  sign = 1;
  for(i=1;i<=a;i+=2)
  {
    sum+=(1.0/i)*sign;
    sign*=-1;
  }
  sum = 4 * sum;
  printf("\nThe value of pi is %f",sum);
  return 0;
}

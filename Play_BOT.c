#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
  printf("\n1 - stone");
  printf("\n2 - papper");
  printf("\n3 - scissors");

  srand(time(0));
  int cc = rand()%3 +1,pc;
  int p = 0,c = 0;
  begin:
  printf("\n\nEnter your choice : ");
  scanf("%d",&pc);

  if (pc == cc)
  {
    printf("We kept the same gesture");
  }

  else if ( (pc==1 && cc==3) || (pc==2 && cc==1) || (pc==3 && cc==2))
  {
    printf("Player Wins !");
    p++;
  }

  else
  {
    printf("Computer Wins !");
    c++;
  }



  printf("\nThe points are : \n         %d\n         %d",p,c);
  goto begin;
  return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
  char password[100],encrypt[100];

  int l,i,key;
  printf("\n\n****************************************************************");
  printf("\n\nEnter the KEY(10) : ");
  scanf("%d",&key);

  printf("Enter the password you want to encrypt : ");
  scanf("\n");
  gets(password);

  l = strlen(password);

  for(i=0;i<l;i++)
  {
     encrypt[i] = password[i]+key;
     key=key+10
  }

  encrypt[i] = '\0';

  printf("The encryped code is : %s",encrypt);

  printf("\n\n****************************************************************");

  return 0;

}

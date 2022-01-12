#include<stdio.h>
#include<string.h>
int main()
{
  char password[100],encrypt[100];

  int l,i,key;
  printf("_____________________________________________________");
  printf("\n\nEnter the KEY : ");
  scanf("%d",&key);

  printf("Enter the password you want to encrypt : ");
  scanf("\n");
  gets(password);

  l = strlen(password);

  for(i=0;i<l;i++)
    encrypt[i] = password[i]+key;

  encrypt[i] = '\0';

  printf("The encryped code is : %s",encrypt);

  printf("\n\n_____________________________________________________"); 
  
  return 0;

}

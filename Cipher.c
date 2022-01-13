#include<stdio.h>
#include<string.h>
int main()
{
  //Encryption

  printf("\nENCRYPTION");

  char password[100],encrypt[100];

  int l,i,key;

  printf("\n\n****************************************************************");
  printf("\n\nEnter the KEY: ");
  scanf("%d",&key);

  printf("\nEnter the message you want to encrypt : ");
  scanf("\n");
  gets(password);

  l = strlen(password);

  for(i=0;i<l;i++)
     encrypt[i] = password[i]+key;


  encrypt[i] = '\0';

  printf("\nThe encryped code is : %s",encrypt);

  printf("\n\n****************************************************************");

  key = 0;

  //Decryption

  printf("\nDECRYPTION");

  char message[200],decrypt[200];

  int ll,j,space;

  printf("\n\n****************************************************************");

  printf("\nEnter the Key : ");
  scanf("%d",&key);

  printf("\nEnter the message you wnt to decrypt : ");
  scanf("%s",message);
  scanf("\n");
  gets(message);

  ll = strlen(message);

  for(j=0;j<ll;j++)
    decrypt[j] = message[j]-key;

    decrypt[j] = '\0';

    printf("\nThe decrypted code is : %s",decrypt);

    printf("\n\n****************************************************************");

  return 0;

}

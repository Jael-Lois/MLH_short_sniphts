#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);
    
    for (int i=strlen(str)-1; i>=0; i--)
      printf("%c", str[i]);
    return 0;
}

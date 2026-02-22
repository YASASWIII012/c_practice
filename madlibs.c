#include <stdio.h>
#include <string.h>
int main()
{
    char noun[50];
    char verb[50];
    char adjective1[50];
char adjective2[50];
char adjective3[50];
printf("Enter an adjective: ");
scanf("%s",adjective1);
printf("Enter a noun: ");
scanf("%s",noun);
printf("Enter an adjective: ");
scanf("%s",adjective2);
printf("Enter a verb: ");
scanf("%s",verb);
printf("Enter an adjective: ");
scanf("%s",adjective3);
printf("Today i went to a %s zoo.\n",adjective1);
printf("there I saw %s\n",noun);
printf("%s was %s and %s.\n",noun,adjective2,verb);
printf("I was %s\n",adjective3);
return 0;
}
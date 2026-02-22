#include <stdio.h>
int main()
{
int x=5;
int y=3;
printf("%d\n",x+y);
printf("%d\n",x-y);
printf("%d\n",x*y);
printf("%d\n",x/y);
float z=3;

printf("%f\n",x/z);
printf("%d\n",x%y);
x++; 
printf("%d\n",x);

x--;
printf("%d\n",x);
x=x+2; 
printf("%d\n",x);
x+=2;
printf("%d\n",x);
x=x-2;
printf("%d\n",x);
x-=2;
printf("%d\n",x);

return 0;


}

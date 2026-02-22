#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x=9;
    float y=3.14;
    float z=3.99;
    x=sqrt(x);  //sqrt of 9=3
    printf("%d\n",x);
    x=2;
    x=pow(x,3); //2 to the power of 3
    printf("%d\n",x);
    y=round(y); //round of 3.14=3
    printf("%f\n",y);
    y=3.14;
    y=ceil(y); //round of 3.14=4
    printf("%f\n",y);
    z=floor(z);
    printf("%f\n",z); //round of 3.99 is 3.0
    x=-9;  //changes to positive
    x=abs(x);
    printf("%d\n",x);
    return 0;

}
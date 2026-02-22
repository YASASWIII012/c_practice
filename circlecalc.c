#include <stdio.h>
#include <math.h>
int main()
{
    double radius;
    double area;
    double pi=3.1415;
    double surfaceArea;
    double volume;
    printf("Enter radius:");
    scanf("%lf",&radius);
    area = pi*pow(radius,2);
    surfaceArea=4*pi*pow(radius,2);
    volume=(4.0/3.0)*pi*pow(radius,3);
    printf("Area: %lf\n",area);
    printf("Area: %.2lfcm\n",area);
    printf("SurfaceArea: %lf\n",surfaceArea);
    printf("SurfaceArea: %.2lfcm\n",surfaceArea);
    printf("volume: %lf\n",volume);
    printf("volume: %.2lfcm\n",volume);
    return 0;
}
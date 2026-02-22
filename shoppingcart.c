#include <stdio.h>
int main()
{
    char item[50];
    int quantity;
    float total;
    float price;
    printf("What item would you like to buy? ");
    scanf("%s",item);
    printf("Whats the price for one? ");
    scanf("%f",&price);
    printf("how many do you want? ");
    scanf("%d",&quantity);
    total=quantity*price;
    printf("Your Bill Total is:%.2f",total);
    return 0;
}
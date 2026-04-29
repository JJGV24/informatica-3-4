#include <stdio.h>

int main(void)
{
//variables
    char item[15];
    float price;
    int quantity;

printf("item? \n= ");
scanf("%d", &item);
//no se porque no para :(
printf("price? \n= ");
scanf("%f", &price);

printf("quantity? \n= ");
scanf("%d", &quantity);
float total = price*quantity;

    printf("***********************\n");
    printf("Abarrotes Cesar\n");
    printf("***********************\n");
    printf("Item       Quantity   Price\n");
    printf("%c          %d          %f\n",item ,quantity ,price);
}

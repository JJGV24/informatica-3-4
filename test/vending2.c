#include <stdio.h>

int main(void)
{
//variables for snck 1 (tostiviches)
    float price1 = 119.99;
    int stock1 = 15;
    char selcode1 = 'A';
//variables for snack 2 (papitas)
   float price2 = 24.99;
    int stock2 = 30;
    char selcode2 = 'B';
    //variables for snack 3 (Shake)
   float price3 = 79.99;
    int stock3 = 10;
    char selcode3 = 'C';

 //   - `%d` for `int`
//- `%.2f` for `float`
//- `%lf` for `double`
//- `%c` for `char`

    printf("Welcome the the Snack Shop\n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\t\tQuantity\tCode\n");
    printf("tostiviches\t%.2f\t\t%d\t\t%c\n", price1, stock1, selcode1);
    printf("papitas\t\t%.2f\t\t%d\t\t%c\n", price2, stock2, selcode2);
    printf("Shake\t\t%.2f\t\t%d\t\t%c\n", price3, stock3, selcode3);
}

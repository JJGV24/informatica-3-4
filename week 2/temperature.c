#include <stdio.h>

int main(void)
{
    //puro CJNG
    float cel;
    float fah;
    printf("°F= ");
    scanf("%f",&fah);
    cel = (fah-32)/1.8;
    printf("°F%f = °C%f\n", fah, cel);
}

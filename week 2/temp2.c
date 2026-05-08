#include <stdio.h>

int main(void)
{
    float cel;          //variables
    float fah;

    printf("°C= ");         //ask for temp
    scanf("%f",&cel);

    fah = (cel*1.8)+32;     //formula to get it in fahrenheit
    printf("°C%.1f = °F%.1f\n", cel, fah);

        if (cel < 0)        //cool messages
        {
            printf("❄️ Freezing weather\n");
        }
        else if (cel < 10)
        {
            printf("🥶 Very cold weather\n");
        }
        else if (cel < 20)
        {
            printf("🧥 Chilly weather\n");
        }
        else if (cel < 30)
        {
            printf("🖼️ Normal weather\n");
        }
        else if (cel < 40)
        {
            printf("☀️ Hot weather\n");
        }
        else
        {
            printf("🔥 Very hot weather\n");
        }

    }

#include <stdio.h>
//prototype
void CtoF(void);
void FtoC(void);
int main(void)
{
    int option;

    printf("Temperature Converter\n");
    printf("if you want to convert °C to °F type 1\n");
    printf("if you want to convert °F to °C type 2\n");
    scanf("%d",&option);

    if (option == 1){
        CtoF();
    }
    else if(option ==2){
        FtoC();
    }
    else{
        printf("you stupid?\n");
    }
}
void CtoF(void){

    float cel;          //variables
    float fah;

    printf("°C= ");         //ask for temp
    scanf("%f",&cel);

    fah = (cel*1.8)+32;     //formula to get it in fahrenheit
    printf("°C%.1f = °F%.1f\n", cel, fah);
}
void FtoC(void){

    float cel;
    float fah;

    printf("°F= ");
    scanf("%f",&fah);

    cel = (fah-32)/1.8;
    printf("°F%f = °C%f\n", fah, cel);
}

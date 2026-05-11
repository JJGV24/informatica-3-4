#include <stdio.h>

//prototype
void add(void);
void less(void);
void mult(void);
void divd(void);

int main(void)
{

    int option;

    printf("Temperature Converter\n");
    printf("if you want to add type 1\n");
    printf("if you want to subtract type 2\n");
    printf("if you want to multiply type 3\n");
    printf("if you want to divide type 4\n");
    scanf("%d",&option);

    if (option == 1){
        add();
    }

    else if (option ==2){
        less();
    }
    else if (option ==3){
        mult();
    }
    else if (option ==4){
        divd();
    }
    else{
        printf("do something with your life lil bro\n");
    }
}
void add(void){

    float N1;
    float N2;

    printf("Equation:\n");
    scanf("%f+%f",&N1 ,&N2);
    float ans = N1 + N2;
    printf("%.2f\n",ans);
}
void less(void){

    float N1;
    float N2;

    printf("Equation:\n");
    scanf("%f-%f",&N1 ,&N2);
    float ans = N1 - N2;
    printf("%.2f\n",ans);
}
void mult(void){

    float N1;
    float N2;

    printf("Equation:\n");
    scanf("%f*%f",&N1 ,&N2);
    float ans = N1 * N2;
    printf("%.2f\n",ans);
}
void divd(void){

    float N1;
    float N2;

    printf("Equation:\n");
    scanf("%f/%f",&N1 ,&N2);
    float ans = N1 / N2;
            if (N2 == 0){
                printf("no can do brothie\n");
            }
            else{
    printf("%.2f\n",ans);
            }
}

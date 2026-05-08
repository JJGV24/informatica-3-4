#include <stdio.h>

int main(void)
{
    int movruntimeh;
    int movruntimem;
    int starttimeh;
    int startimem;
    int endth;
    int endtm;

    printf("How long is your movie in hr? \n= ");
    scanf("%d:%d",&movruntimeh, &movruntimem);

    int min_t = (movruntimeh*60)+movruntimem;
    printf("Movie running time (in minutes): %d\n", min_t);

    printf("Starting time: \n= ");
    scanf("%d:%d", &starttimeh, &startimem);

    endth = (min_t/60)+starttimeh;
    endtm = min_t%60;

    if (endtm >= 60){
            endth = endth + 1; //update value of endhour variable
            endtm = endtm - 60;
    }

    printf("The movie will end at %d:%02d \n", endth, endtm);

}

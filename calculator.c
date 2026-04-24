#include <stdio.h>

int main(void)
{
    int x;
    int y;
    printf("height =");
    scanf("%d",&x);

    printf("width =");
    scanf("%d",&y);

    int A = x*y;
    int P = 2*x+2*y;
    printf("area=%d\n", A);
    printf("perimeter=%d\n", P);
}

#include <stdio.h>
int main(){
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int x7;

    printf("Enter Two Integers:");
    scanf("%d %d", &x1, &x2);
    x3=x1+x2;
    x4=x1-x2;
    x5=x1*x2;
    x6=x1/x2;
    x7=x1%x2;
    printf("%d + %d = %d\n", x1, x2, x3);
    printf("%d - %d = %d\n", x1, x2, x4);
    printf("%d * %d = %d\n", x1, x2, x5);
    printf("%d / %d = %d\n", x1, x2, x6);
    printf("%d %% %d = %d\n", x1, x2, x7);
    return 0;
}

#include <stdio.h>
int main(){
    int x1;
    int x2;
    float x3;
    float x4;

    while(1){
        printf("Enter height(-1 to exit):");
        scanf("%d %d", &x1, &x2);
        if(x1==-1&&x2==-1){
                 printf("Bye! Coding by 407410231\n");
                break;
        }
        for(int i=x1;i<=x2;i++){
            x3=18.5*i*i/10000;
            x4=24.0*i*i/10000;
            printf("%4d cm: %.1f ~ %.1f (kg)\n", i, x3, x4);

        }


        }

        return 0;
}

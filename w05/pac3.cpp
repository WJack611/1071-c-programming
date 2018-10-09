#include<stdio.h>
void prchar(char c,int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
        }
void trian(int height){
    for(int i=1;i<=height;i++){
        prchar(' ',height-i);
        prchar('*',i);
        prchar(' ',2);
        prchar('*',i);
        printf("\n");
        }
}

int main(){
    int height;
    while(1){
        printf("Enter Height(-1 to exit):");
        scanf("%d", &height);
        if(height==-1){
            printf("Bye! Coding by 407410231\n");
        break;
        }
        else
           trian(height);


        }

    return 0;
}

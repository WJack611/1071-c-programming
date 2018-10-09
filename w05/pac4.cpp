#include <stdio.h>
int enc(int n){
    int a,w,x,y,z,y2;
    a=n/1000;
    z=(n-a*1000)/100;
    if(y=(a+5)>=9)
        y2=(a+5)-10;
    w=(n-a*1000-z*100)/10;
    x=(n-a*1000-z*100-w*10);
printf("encode(%d)%d%d%d%d //by calling encode(n)\n", n, w, x, y2, z);
}
int dec(int n){
    int a,w,x,y,z,y2;
    a=n/1000;
    z=(n-a*1000)/100;
    if(y=(a+5)>=9)
        y2=(a+5)-10;
    w=(n-a*1000-z*100)/10;
    x=(n-a*1000-z*100-w*10);
printf("decode(%d%d%d%d)%d //by calling decode(n)\n", w, x, y2, z, n);

}
int main(){
    int n;
    while(1){
        printf("Enter N:");
        scanf("%d", &n);
        if(n==-1){
        printf("Bye! Coding by 407410231\n");
        break;

        }
        else{
            enc(n);
            dec(n);

            }
    }

    return 0;

}

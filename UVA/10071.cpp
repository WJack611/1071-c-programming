#include <stdio.h>
int main(){
    int v,t,x;
    while(scanf("%d%d",&v,&t)!=EOF){
     int x=0.5*v*4*t;
     printf("%d\n",x);
    }
    return 0;
}

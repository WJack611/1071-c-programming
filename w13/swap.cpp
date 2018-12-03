#include <stdio.h>
void swapping(int *pa,int *pb){
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("swap:%d %d\n",*pa,*pb);
}
int main(){
    int a=10;
    int b=20;
    swapping(&a,&b);
    printf("main:%d %d",a,b);
}

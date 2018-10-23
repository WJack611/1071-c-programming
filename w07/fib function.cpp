#include <stdio.h>
long fsum(int n){
    if(n==0||n==1)
        return n;
    else
        return fsum(n-2)+fsum(n-1);

   }
int main(){
    int n;
    printf("fib(3)=%ld\n", fsum(3));
    printf("fib(10)=%ld\n", fsum(10));
    printf("fib(30)=%ld\n", fsum(30));
}

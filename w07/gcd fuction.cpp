#include <stdio.h>
int rg(int n1,int n2){
    if(n1==0)
        return n2;
    else
        return rg(n2%n1,n1);

}
int g(int n1,int n2){
    int x;
    while(n1>0){
        x=n2%n1;
        n2=n1;
        n1=x;
    }
    return n2;
}
int main(){
    printf("gcd(48,126)=%d\n", rg(48,126));
    printf("gcd(48,126)=%d\n", g(48,126));
    printf("gcd(48,128)=%d\n", rg(48,128));
    printf("gcd(48,128)=%d\n", g(48,128));
    printf("gcd(48,144)=%d\n", rg(48,144));
    printf("gcd(48,144)=%d\n", g(48,144));
    printf("gcd(48,48)=%d\n", rg(48,48));
    printf("gcd(48,48)=%d\n", g(48,48));
}

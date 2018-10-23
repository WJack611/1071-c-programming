#include <stdio.h>
int rsum1(int n){
    if(n==1)
        return 1;
    else
        return rsum1(n-1)+(2*n-1);

}
int rsum2(int n){
    int odd;
    if(n%2==1){
       if(n==1)
        return 1;
    else
        return rsum2(n-2)+n;
    }
    else{
        odd=n-1;
        if(odd==1)
            return 1;
        else
            return rsum2(odd-2)+odd;
    }


}
int main(){
    while(1){
        int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("summod1(%d)=(%d)\n", n, rsum1(n));
    printf("summod2(%d)=(%d)\n", n, rsum2(n));
    }

}

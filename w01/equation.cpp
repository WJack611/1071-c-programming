#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c; 
	double x1,x2;
	printf("Enter a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	if (b*b-4*a*c>=0){
	    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("For equation (%d) x^2 + (%d) x + (%d)\n",a,b,c);
	    printf("x1=%.1f\n",x1);
	    printf("x2=%.1f",x2);
	
	}else{
		printf("no real roots\n");
	}
}

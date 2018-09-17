#include <stdio.h>
int main(){
	
	float C, F;
	printf("Enter the temperature in C:");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1fC=%.1fF",C,F);
	
}
/*
Temperature convert
Enter temperature in C: 20.5
20.5 C = 68.9 F
*/

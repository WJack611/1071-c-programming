#include <stdio.h>
int main(){
	
	float C, F;
	printf("Enter the temperature in F:");
	scanf("%f",&F);
    C=(F-32)*5/9;
	printf("%.1fF=%.1fC",F,C);
	
}
/*
Temperature convert
Enter temperature in F: 80.5
80.5 F = 26.9 C

*/


#include <stdio.h>
int main(){
	int year;
	printf("Enter year:");
	scanf("%d",&year);
    while(year>=0){
    	if((year%4==0&!(year%100==0))||year%400==0)
		  printf("%d is leap year\n",year);
		else 
		  printf("%d is not leap year\n",year);
	printf("Enter year:");
	scanf("%d",&year); 
		}
	  
}	

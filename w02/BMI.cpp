#include <stdio.h>
#include <math.h>
int main(){
	float weight,height;
	double BMI;
	printf("Enter weight:");
	scanf("%f",&weight);
	printf("Enter height");
	scanf("%f",&height);
	BMI=weight/(height*height);
	printf("%f\n",BMI);
	while(BMI>=0){
		if(BMI<18.5)
			printf("�魫�L��\n");
		else if(BMI<24&&BMI>=18.5)
			printf("���`�d��\n"); 
		else if(BMI<27&&BMI>=24)
			printf("�L��\n");
		else if(BMI<30&&BMI>=27)
			printf("���תέD\n"); 
		else if(BMI<35&&BMI>=30)
			printf("���תέD\n");
		else
			printf("���תέD\n");
	printf("Enter weight:");
	scanf("%f",&weight);
	printf("Enter height");
	scanf("%f",&height);
	}
} 
	
 

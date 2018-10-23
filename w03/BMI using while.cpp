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
			printf("體重過輕\n");
		else if(BMI<24&&BMI>=18.5)
			printf("正常範圍\n"); 
		else if(BMI<27&&BMI>=24)
			printf("過重\n");
		else if(BMI<30&&BMI>=27)
			printf("輕度肥胖\n"); 
		else if(BMI<35&&BMI>=30)
			printf("中度肥胖\n");
		else
			printf("重度肥胖\n");
	printf("Enter weight:");
	scanf("%f",&weight);
	printf("Enter height");
	scanf("%f",&height);
	}
} 

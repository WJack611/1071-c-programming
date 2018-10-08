#include <stdio.h>
int isLeap(int year){
    if((year%4==0&!(year%100==0))||year%400==0)
        return 1;
    else
        return 0;
}
int timecon(int hh,int mm,int ss){
   return hh*3600+mm*60+ss;
}


int main(){
    while(1){
    int choice;
    int year;
    int hh;
    int mm;
    int ss;
    int sec;
    int height;
    int weight;

    printf("Main Menu\n");
    printf("1. Leap year\n");
    printf("2. Timeconvert\n");
    printf("3. Exit\n");
    printf("=>");
    scanf("%d", &choice);
    if(choice==4)break;
    switch(choice){
    case 1:
        printf("Enter year:");
        scanf("%d", &year);
        if(isLeap(year))
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);
        printf("\n");
        break;
    case 2:
        printf("Enter hh:mm::ss :");
        scanf("%d:%d:%d", &hh, &mm, &ss);
        sec=timecon(hh,mm,ss);
        printf("%d:%d:%d = %d sec\n", hh, mm, ss, sec);
        printf("\n");
        break;

    }

    }
    return 0;

}

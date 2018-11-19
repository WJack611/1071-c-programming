#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100

struct Date{
    int year;
    int month;
    int day;
};


int main(){
    int n;
    Date date;
    Date dates[Max];
    srand(time(NULL));
    printf("Enter n:");
    scanf("%d", &n);
    printf("\n");
        for(int i=0;i<n;i++){
            dates[i].year=rand()%11+2010;
            dates[i].month=rand()%12+1;
            dates[i].day=rand()%31+1;
            printf("%d/%02d/%02d\n", dates[i].year, dates[i].month, dates[i].day);
        }

}

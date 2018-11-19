#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100

struct Date{
    int year;
    int month;
    int day;
};
struct Lotto{
    Date date;
    int number[6];
};
int duplicate(int number[], int pos){
    for(int i=0;i<pos;i++){
        if(number[i]=number[i-1])
            return 0;
        else
            return 1;
    }
}
int main(){
    int n;
    int temp;
    Lotto lotto;
    Lotto lottos[Max];
    srand(time(NULL));
    printf("Enter n:");
    scanf("%d", &n);
    printf("\n");
        for(int i=0;i<n;i++){
            lottos[i].date.year=rand()%11+2010;
            lottos[i].date.month=rand()%12+1;
            lottos[i].date.day=rand()%31+1;
            printf("%d/%02d/%02d", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day,lottos[i].number);
            for(int j=0;j<6;j++){
            do{
                temp= rand()%49+1;
                lottos[i].number[j]=temp;
            }while(duplicate(lottos[i].number,j));
            printf(" %02d",lottos[i].number[j]);
            }
            printf("\n");
    }
}


/*int main(){
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
*/
lottos[i].number[j]=temp;

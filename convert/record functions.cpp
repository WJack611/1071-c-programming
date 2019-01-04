#include "convert.h"

struct Data
{
    int choice2;
    int choice3;
    float money;
    float result;
};
void record(Data *data[],int c2,int c3,float n,float b,int i)
{
    data[i] = (Data *)malloc(sizeof(struct Data));
    data[i]->choice2=c2;
    data[i]->choice3=c3;
    data[i]->money=n;
    data[i]->result=b;
}
void pr(Data *data[],int n)
{
    printf("***********************\n");
    for(int i=0; i<n; i++)
    {
        printf("%d.",i+1);
        printf(" %.2f ",data[i]->money);
        if(data[i]->choice2==1)
        {
            printf("台幣");
        }
        else if(data[i]->choice2==2)
        {
            printf("美元");
        }
        else if(data[i]->choice2==3)
        {
            printf("歐元");
        }
        printf(" = %.2f ",data[i]->result);
        if(data[i]->choice3==1)
        {
            printf("台幣");
        }
        else if(data[i]->choice3==2)
        {
            printf("美元");
        }
        else if(data[i]->choice3==3)
        {
            printf("歐元");
        }
        printf("\n");
    }
    printf("***********************\n");
}

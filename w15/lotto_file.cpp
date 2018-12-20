#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

FILE *fp;

int counter=0;

struct Date
{
    int year;
    int month;
    int day;
};

struct Lotto
{
    Date date;
    int num[6];
};


int duplicate(int num[], int pos)
{
    for(int i=0; i<pos; i++)
    {
        if(num[i]==num[pos])
            return 1;
    }
    return 0;
}

void rg(Lotto lottos[],int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        lottos[counter].date.year = rand()%11+2010;
        lottos[counter].date.month = rand()%12+1;
        lottos[counter].date.day = rand()%31+1;
        for(int j=0; j<6; j++)
        {
            do
            {
                temp = rand()%49+1;
            }
            while(duplicate(lottos[counter].num,j));

            lottos[counter].num[j] = temp;
        }
        counter++;
    }
}

void sl(Lotto lottos[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0; j<6; j++)
            printf("%02d ", lottos[i].num[j]);
        printf("\n");
    }
}

void wF(Lotto lottos[],int n){
    int choice;
    char filename[80];
    printf("Enter file name:");
    scanf("%s",&filename);
    printf("Choice: 1 for write over, 2 for append\n=>");
    scanf("%d",&choice);
    if(choice==1)
        fp = fopen(filename, "w");
    else
        fp = fopen(filename, "a");
    if(fp==NULL){
        printf("ERROR!");
        exit(1);
    }
    for(int i=0; i<n; i++)
    {
        fprintf(fp, "%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0; j<6; j++)
            fprintf(fp, "%02d ", lottos[i].num[j]);
        fprintf(fp, "\n");
    }

    fclose(fp);
    printf("%d lotto data written to file %s successfully\n",n,filename);
}

void resetf(Lotto lottos[],int n){
     for(int i=0; i<n; i++)
    {
        lottos[i].date.year=0;
        lottos[i].date.month=0;
        lottos[i].date.day=0;

        for(int j=0; j<6; j++)
        lottos[i].num[j]=0;
    }
}

void readf(Lotto lottos[]){
    char filename[80];
    printf("Enter file name:");
    scanf("%s",&filename);
    fp = fopen(filename, "r");
    if(fp==NULL){
        printf("ERROR!");
        exit(1);
    }
    int i=0;
    while(fscanf(fp, "%d/%d/%d %d %d %d %d %d %d",
                 &lottos[i].date.year, &lottos[i].date.month, &lottos[i].date.day,
                 &lottos[i].num[0], &lottos[i].num[1], &lottos[i].num[2],
                 &lottos[i].num[3], &lottos[i].num[4], &lottos[i].num[5])==9)
    {
        i++;
    }
    i=counter;
    fclose(fp);
    printf("%d lotto data has been read from file %s successfully.\n\n",counter,filename);
}

int main()
{
    Lotto lottos[MAX];

    int n;
    int temp;
    srand(time(NULL));
    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");
    rg(lottos,n);
    sl(lottos,counter);
    printf("1\n");
    rg(lottos,n);
    sl(lottos,counter);
    wF(lottos,counter);
    resetf(lottos,counter);
    readf(lottos);
    sl(lottos,counter);
}

#include "convert.h"

int main()
{
    Data *data[MAX];
    int i=0;
    int choice;
    int choice2;
    int choice3;
    float money;
    float b;
    printf("***********************\n");
    printf("*     1.幣值轉換器    *\n");
    printf("*     2.紀錄表        *\n");
    printf("*     3.離開          *\n");
    printf("***********************\n");
    while(1)
    {
        printf("請輸入選項 :");
        scanf("%d",&choice);
        if(choice==3)
            break;
        switch(choice)
        {
        case 1:
            printf("1.台幣    2.美金    3.歐元\n\n\n");
            printf("請輸入欲轉換幣種 :___->____ : ");
            scanf( "%d %d",&choice2,&choice3);
            switch(choice2)
            {
            case 1:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=money;
                    printf("台幣轉台幣金額是: %.2f\n",b);
                    record(data,choice2,choice3,money,b,i);
                    printf("***********************\n");

                    i++;
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=TU(money);
                    printf("台幣轉美金金額是: %.2f\n", b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=TE(money);
                    printf("台幣轉歐元金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                }
                break;
            case 2:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=UT(money);
                    printf("美金轉台幣金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=money;
                    printf("美金轉美金金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=UE(money);
                    printf("美金轉歐元金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                }
                break;
            case 3:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=ET(money);
                    printf("歐元轉台幣金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=EU(money);
                    printf("歐元轉美金金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%f",&money);
                    b=money;
                    printf("歐元轉歐元金額是: %.2f\n",b);
                    printf("***********************\n");
                    record(data,choice2,choice3,money,b,i);
                    i++;
                    break;
                }
                break;
            }
            break;
        case 2:
            pr(data,i);
            break;
        }
    }
}

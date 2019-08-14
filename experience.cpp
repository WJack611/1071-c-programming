#include<stdio.h>
#define Max 200

float counts1(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(600*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(600*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(600*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(600*2.5)/5;
        else if(i>89&&i<=119)
            c[i]=e[i]/(600*3.0)/5;
        sum=sum+c[i];
    }
    return sum;
}
float counts1s(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(500*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(500*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(500*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(500*2.5)/5;
        else if(i>89&&i<=119)
            c[i]=e[i]/(500*3.0)/5;
        sum=sum+c[i];
    }
    return sum;
}
float counts2(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(470*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(470*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(470*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(470*2.5)/5;
        else if(i>89&&i<=111)
            c[i]=e[i]/(470*3.0)/5;
        else if(i>111&&i<=119)
            c[i]=e[i]/(470*3.0*0.8)/5;
        sum=sum+c[i];
    }
    return sum;
}
float counts2s(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(392*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(392*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(392*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(392*2.5)/5;
        else if(i>89&&i<=111)
            c[i]=e[i]/(392*3.0)/5;
        else if(i>111&&i<=119)
            c[i]=e[i]/(392*3.0*0.8)/5;
        sum=sum+c[i];
    }
    return sum;
}
float counts3(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(660*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(660*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(660*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(660*2.5)/5;
        else if(i>89&&i<=119)
            c[i]=e[i]/(660*3.0)/5;
        sum=sum+c[i];
    }
    return sum;
}
float counts3s(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(550*1.0)/5;
        else if(i>9&&i<=29)
            c[i]=e[i]/(550*1.5)/5;
        else if(i>29&&i<=69)
            c[i]=e[i]/(550*2.0)/5;
        else if(i>69&&i<=89)
            c[i]=e[i]/(550*2.5)/5;
        else if(i>89&&i<=119)
            c[i]=e[i]/(550*3.0)/5;
        sum=sum+c[i];
    }
    return sum;
}
float autobattle7(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(290.8*1.5*10*1.0);
        else if(i>9&&i<=29)
            c[i]=e[i]/(290.8*1.5*10*1.5);
        else if(i>29&&i<=69)
            c[i]=e[i]/(290.8*1.5*10*2.0);
        else if(i>69&&i<=89)
            c[i]=e[i]/(290.8*1.5*10*2.5);
        else if(i>89&&i<=96)
            c[i]=e[i]/(290.8*1.5*10*3.0);
        else if(i>96&&i<=106)
            c[i]=e[i]/(290.8*1.5*10*3.0*0.8);
        else if(i>106&&i<=116)
            c[i]=e[i]/(290.8*1.5*10*3.0*0.6);
        else if(i>116&&i<=119)
            c[i]=e[i]/(290.8*1.5*10*3.0*0.4);
        sum=sum+c[i];
    }
    return sum;
}
float autobattle11(int a,int b,float e[Max],float c[Max]){
    float sum=0;
    for(int i=a;i<=b-1;i++){
        if(i<=9)
            c[i]=e[i]/(364.1*10*1.5*1.0);
        else if(i>9&&i<=29)
            c[i]=e[i]/(364.1*10*1.5*1.5);
        else if(i>29&&i<=69)
            c[i]=e[i]/(364.1*10*1.5*2.0);
        else if(i>69&&i<=89)
            c[i]=e[i]/(364.1*10*1.5*2.5);
        else if(i>89&&i<=119)
            c[i]=e[i]/(364.1*10*1.5*3.0);
        sum=sum+c[i];
    }
    return sum;
}
int main(){
    float e[Max]={
                0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300,
                1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400,
                2500, 2600, 2800, 3100, 3400, 4200, 4600, 5000, 5400, 5800, 6300,
                6700, 7200, 7700, 8200, 8800, 9300, 9900 ,10500 ,11100 ,11800 ,
                12500, 13100, 13900, 14600, 15400, 16100, 16900, 17800, 18600, 19500,
                20400, 21300, 22300, 23300,24300, 25300, 26300, 27400,28500, 29600,
                30800, 32000, 33200, 34400, 45100, 46800, 48600, 50400, 52200,54000,
                55900, 57900, 59800, 61800, 63900, 66000, 68100, 70300, 72600, 74800,
                77100, 79500, 81900, 84300, 112600, 116100, 119500, 123100, 126700,
                130400, 134100, 137900, 141800, 145700, 100000, 120000, 140000, 160000,
                180000,200000, 220000, 240000, 280000, 360000, 480000, 640000, 900000,
                1200000,1600000, 2200000, 3000000, 4000000, 5000000, 6000000
                };
    float c[Max]={};
    int a,b;
    int choice1,choice2,choice3;
    while(1){
        printf("Select Normal or Auto Battle:\n");
        printf("1. Normal\n");
        printf("2. Auto\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d",&choice1);
        printf("\n");
        if(choice1==3) break;
        switch(choice1){
        case 1:
            while(1){
            printf("Enter current level and target level:\n");
            scanf("%d %d",&a,&b);
            printf("\n");
            printf("Select map\n");
            printf("1. 0-2\n");
            printf("2. 8-1n\n");
            printf("3. 11-5\n");
            printf("4. Exit\n");
            printf("=>");
            scanf("%d",&choice2);
            printf("\n");
            switch(choice2){
            case 1:
                printf("need %.4f 0-2\n",counts2(a,b,e,c));
                printf("need %.4f 0-2(if doll is not team leader)\n",counts2s(a,b,e,c));
                break;
            case 2:
                printf("need %.4f 8-1n\n",counts1(a,b,e,c));
                printf("need %.4f 8-1n(if doll is not team leader)\n",counts1s(a,b,e,c));
                break;
            case 3:
                printf("need %.4f 11-5\n",counts3(a,b,e,c));
                printf("need %.4f 11-5(if doll is not team leader)\n",counts3s(a,b,e,c));
                break;
            case 4:
                break;
                }
            printf("\n");
            break;
            }
            break;
        case 2:
            while(1){
            printf("Enter current level and target level2:\n");
            scanf("%d %d",&a,&b);
            printf("\n");
            printf("Select map\n");
            printf("1. 7-1\n");
            printf("2. 11-5\n");
            printf("3. Exit\n");
            printf("=>");
            scanf("%d",&choice3);
            printf("\n");
            switch(choice3){
            case 1:
                printf("need 7-1 autobattle %.4f hours\n",autobattle7(a,b,e,c)/1.2);
                printf("need 7-1 autobattle %.4f hours(if doll is not team leader)\n",autobattle7(a,b,e,c));
                break;
            case 2:
                printf("need 11-5 autobattle %.4f hours\n",autobattle11(a,b,e,c)/1.2);
                printf("need 11-5 autobattle %.4f hours(if doll is not team leader)\n",autobattle11(a,b,e,c));
                break;
                }
            case 3:
                break;
            }
            printf("\n");
            break;
        }
    }
}

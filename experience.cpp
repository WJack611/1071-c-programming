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
        else if(i>89&&i<=119)
            c[i]=e[i]/(470*3.0)/5;
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
        else if(i>89&&i<=119)
            c[i]=e[i]/(392*3.0)/5;
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
    printf("Enter current level and target level:\n");
    scanf("%d %d",&a,&b);
    printf("need %.4f 8-1n\n",counts1(a,b,e,c));
    printf("need %.4f 8-1n(if doll is not team leader/first place)\n",counts1s(a,b,e,c));
    printf("\n");
    printf("need %.4f 0-2\n",counts2(a,b,e,c));
    printf("need %.4f 0-2(if doll is not team leader/first place)\n",counts2s(a,b,e,c));
}


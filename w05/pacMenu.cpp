#include <stdio.h>
void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}
void trian(int height)
{
    for(int i=1; i<=height; i++)
    {
        prchar(' ',height-i);
        prchar('*',i);
        prchar(' ',2);
        prchar('*',i);
        printf("\n");
    }
}
int enc(int n)
{
    int a,w,x,y,z,y2;
    a=n/1000;
    z=(n-a*1000)/100;
    if(y=(a+5)>=9)
        y2=(a+5)-10;
    w=(n-a*1000-z*100)/10;
    x=(n-a*1000-z*100-w*10);
    printf("encode(%d)%d%d%d%d //by calling encode(n)\n", n, w, x, y2, z);
}
int dec(int n)
{
    int a,w,x,y,z,y2;
    a=n/1000;
    z=(n-a*1000)/100;
    if(y=(a+5)>=9)
        y2=(a+5)-10;
    w=(n-a*1000-z*100)/10;
    x=(n-a*1000-z*100-w*10);
    printf("decode(%d%d%d%d)%d //by calling decode(n)\n", w, x, y2, z, n);

}
int main()
{
    while(1)
    {
        int choice;
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges\n");
        printf("(3)Draw Four Vertical Triangles\n");
        printf("(4) encode(n)\n");
        printf("(5) decode(n)\n");
        printf("(6) Exit\n");
        printf("=>");
        scanf("%d", &choice);
        if(choice==6)break;
        switch(choice)
    {
    case 1:
        int x1;
        int x2;
        int x3;
        int x4;
        int x5;
        int x6;
        int x7;

        printf("Enter Two Integers:");
            scanf("%d %d", &x1, &x2);
            x3=x1+x2;
            x4=x1-x2;
            x5=x1*x2;
            x6=x1/x2;
            x7=x1%x2;
            printf("%d + %d = %d\n", x1, x2, x3);
            printf("%d - %d = %d\n", x1, x2, x4);
            printf("%d * %d = %d\n", x1, x2, x5);
            printf("%d / %d = %d\n", x1, x2, x6);
            printf("%d %% %d = %d\n", x1, x2, x7);
            break;
        case 2:
            int a1;
            int a2;
            float a3;
            float a4;

            while(1)
            {
                printf("Enter height(-1 to exit):");
                scanf("%d %d", &a1, &a2);
                if(a1==-1&&a2==-1)
                {
                    printf("Bye! Coding by 407410231\n");
                    break;
                }
                for(int i=a1; i<=a2; i++)
                {
                    a3=18.5*i*i/10000;
                    a4=24.0*i*i/10000;
                    printf("%4d cm: %.1f ~ %.1f (kg)\n", i, a3, a4);

                }
            }
            break;

        case 3:
            int height;
            while(1)
            {
                printf("Enter Height(-1 to exit):");
                scanf("%d", &height);
                if(height==-1)
                {
                    printf("Bye! Coding by 407410231\n");
                    break;
                }
                else
                    trian(height);
                    break;
            }
            break;
        case 4:
            int n;
            while(1)
            {
                printf("Enter N:");
                scanf("%d", &n);
                if(n==-1)
                {
                    printf("Bye! Coding by 407410231\n");
                    break;

                }
                else
                {
                    enc(n);
                    dec(n);

                }
            }
            break;

        }
    }
    return 0;
}

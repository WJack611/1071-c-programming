#include <stdio.h>
void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c", c);
}
void drawRect(int height, int width, int filled)
{if(filled){
    for(int i=1; i<=height; i++)
    {
        prchar('*', width);
        printf("\n");
    }
}else{ for(int i=1; i<=height; i++)
    {
        prchar(' ',width-2);
        prchar('*',width);
        printf("\n");
    }
}
}
void drawVertTran(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {
                if(j==1||i==j||i==height)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;
    case 2:
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {
                if(i==height||j==height||i+j==(height+1))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;
    case 3:
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {
                if(i==1||j==1||i+j==(height+1))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;
    case 4:
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=height; j++)
            {
                if(i==1||j==height||i==j)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    }

}
int main()
{
    int choice;
    int height;
    int width;
    int type;
    int filled;
    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Trangle\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3)
            break;
        switch(choice)
        {
        case 1:
            printf("Enter height width filled:");
            scanf("%d %d %d", &height, &width, &filled);
            drawRect(height,width,filled);
            break;
        case 2:
            printf("Enter height type filled:");
            scanf("%d %d %d", &height, &type, &filled);
            drawVertTran(height,type,filled);
            break;
        }
    }
    return 0;

}






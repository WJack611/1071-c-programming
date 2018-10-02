#include <stdio.h>
void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c", c);
}
void drawRect(int height, int width, int filled)
{
    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            prchar('*', width);
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height; i++)
        {
            if(i==1||i==height)
            {
                prchar('*',width);
                printf("\n");
            }
            else
            {
                prchar('*',1);
                prchar(' ',width-2);
                prchar('*',1);
                printf("\n");
            }

        }
    }
}
void drawVertTrian(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {
                    prchar('*',i);
                    printf("\n");
                }
                else
                {
                    prchar('*',1);
                    prchar(' ',i-2);
                    prchar('*',1);
                    printf("\n");
                }
            }

        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {
                    prchar('*',height-i+1);
                    printf("\n");
                }
                else
                {
                    prchar('*',1);
                    prchar(' ',height-i-1);
                    prchar('*',1);
                    printf("\n");
                }
            }
        }
        break;
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {
                    prchar(' ',i-1);
                    prchar('*',height-i+1);
                    printf("\n");
                }


                else
                {
                    prchar(' ',i-1);
                    prchar('*',1);
                    prchar(' ',height-i-1);
                    prchar('*',1);
                    printf("\n");
                }
            }
        }

        break;
    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {
                    prchar(' ',height-i);
                    prchar('*',i);
                    printf("\n");
                }
                else
                {
                    prchar(' ',height-i);
                    prchar('*',1);
                    prchar(' ',i-2);
                    prchar('*',1);
                    printf("\n");
                }
            }

        }

        break;

    }

}
void drawIsosTrian(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i+1);
                prchar('*',i*2-1);
                prchar(' ',height-i+1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {

                    prchar(' ',height-i+1);
                    prchar('*',i*2-1);
                    printf("\n");
                }
                else
                {
                    prchar(' ',height-i+1);
                    prchar('*',1);
                    prchar(' ',i*2-3);
                    prchar('*',1);
                    printf("\n");
                }
            }
        }
        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',(height-i+1)*2-1);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1||i==height)
                {
                    prchar(' ',i-1);
                    prchar('*',(height-i+1)*2-1);
                    printf("\n");
                }
                else
                {
                    prchar(' ',i-1);
                    prchar('*',1);
                    prchar(' ',(height-i+1)*2-3);
                    prchar('*',1);
                    printf("\n");
                }
            }
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
        printf("2. Vertical Triangle\n");
        printf("3. Isosceles Triangle\n");
        printf("4. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==4)
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
            drawVertTrian(height,type,filled);
            break;
        case 3:
            printf("Enter height type filled:");
            scanf("%d %d %d", &height, &type, &filled);
            drawIsosTrian(height,type,filled);
        }
    }
    return 0;

}







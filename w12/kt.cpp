#include <stdio.h>
void prArr(int m[][8])
{
    for(int i=0; i<8; i++)
    {
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n|");
        for(int j=0; j<8; j++)
        {
            printf(" %4d|", m[i][j]);
        }
        printf("\n");
    }
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
}
struct Pos
{
    int row;
    int col;
};
Pos NBP(int m[][8],int ac[][8],int row,int col)
{
    Pos pos;
        int nextRow, nextCol;
        int min=9;
        int minRow=-1,minCol=-1;
        ac[row][col]=0;
    if(row==4&&col==3)
    {
        int v[8]= {-2,-1,1,2,2,1,-1,-2};
        int h[8]= {-1,-2,-2,-1,1,2,2,1};
        for(int i=0; i<8; i++)
        {
            nextRow = row + v[i];
            nextCol = col + h[i];
            if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && ac[nextRow][nextCol]>0)
            {
                ac[nextRow][nextCol]--;
                if(ac[nextRow][nextCol]<min)
                {
                    min=ac[nextRow][nextCol];
                    minRow=nextRow;
                    minCol=nextCol;
                }

            }
        }

        pos.row = minRow;
        pos.col = minCol;
        return pos;
    }
    else
    {
        int v[8]= {-1,-2,-2,-1,1,2,2,1};
        int h[8]= {2,1,-1,-2,-2,-1,1,2};
        for(int i=0; i<8; i++)
        {
            nextRow = row + v[i];
            nextCol = col + h[i];
            if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && ac[nextRow][nextCol]>0)
            {
                ac[nextRow][nextCol]--;
                if(ac[nextRow][nextCol]<min)
                {
                    min=ac[nextRow][nextCol];
                    minRow=nextRow;
                    minCol=nextCol;
                }

            }
        }

        pos.row = minRow;
        pos.col = minCol;
        return pos;
    }

}
int kt(int m[][8],int ac[][8],int row,int col)
{
    int moves=1;
    Pos pos;
    m[row][col]=1;
    for(int i=2; i<=64; i++)
    {
        if(row==-1&&col==-1)
        {
            break;
        }
        else
        {
            pos = NBP(m,ac,row,col);
            m[pos.row][pos.col]=i;
            row = pos.row;
            col = pos.col;
            moves++;
        }
    }
    return moves;
}
int main()
{
    while(1)
    {
        Pos pos;
        int moves=1;
        int n;
        int row,col;
        int m[8][8]= {0};
        int counting[8][8]= {};
        int ac[8][8]=
        {
            2, 3, 4, 4, 4, 4, 3, 2,
            3, 4, 6, 6, 6, 6, 4, 3,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            4, 6, 8, 8, 8, 8, 6, 4,
            3, 4, 6, 6, 6, 6, 4, 3,
            2, 3, 4, 4, 4, 4, 3, 2
        };
        printf("Menu\n");
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=>choice:");
        scanf("%d",&n);
        if(n==3)
            break;
        switch(n)
        {
        case 1:
            printf("Enter row and col for number 1:");
            scanf("%d %d",&row,&col);
            kt(m,ac,row,col);
            prArr(m);
            printf("The tour ended with %d moves.\n",kt(m,ac,row,col));
            if(moves==64)
                printf("This was a full tour!\n");
            break;
        case 2:
            for(int i=0; i<=7; i++)
            {
                for(int j=0; j<=7; j++)
                {
                    int ac[8][8]=
                    {
                        2, 3, 4, 4, 4, 4, 3, 2,
                        3, 4, 6, 6, 6, 6, 4, 3,
                        4, 6, 8, 8, 8, 8, 6, 4,
                        4, 6, 8, 8, 8, 8, 6, 4,
                        4, 6, 8, 8, 8, 8, 6, 4,
                        4, 6, 8, 8, 8, 8, 6, 4,
                        3, 4, 6, 6, 6, 6, 4, 3,
                        2, 3, 4, 4, 4, 4, 3, 2
                    };
                    counting[i][j] = kt(m,ac,i,j);

                }
            }
            prArr(counting);
            break;
        }
    }
    return 0;
}

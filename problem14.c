//
// Created by csatl on 1/3/2020.
//

#include <stdlib.h>
#include <stdio.h>

int tableDimension,n,a[20][20],poz_x = 1,poz_y = 1;
int dl[9]={0,-2,-1,1,2, 2, 1,-1,-2};
int dc[9]={0, 1, 2,2,1,-1,-2,-2,-1};
void Reading()
{
    printf ("Give the dimension of the table: ");
    scanf("%d", &n);
    tableDimension = n*n;
}
void Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    exit(0);
    //getch();
}
void Bk(int x, int y, int nr)
{

    if ( (x>0 && x<=n && y>0 && y<=n) && a[x][y]==0 )
    {
        if(nr==tableDimension)
        {
            a[x][y]=nr;
            Display();
        }

        a[x][y]=nr;

        for(int i=1;i<=8;i++)
            Bk(x+dl[i], y+dc[i], nr+1);

        a[x][y]=0;
    }
}
int Problem14()
{
    Reading();
    printf("The displayed table is a complete walked table by a knight, the numbers represents in which order the knight walks the board in order to complete it\n");
    Bk(poz_x,poz_y,1);
}
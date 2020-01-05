#include <stdlib.h>
#include <stdio.h>

int n,m,i,j,a[20][20],xi,yi,ok=0;
void citire()
{
    int x;
    printf("Give n,m rows and columns and, the starting position x,y and the labirinth:\n");
    scanf("%d %d %d %d",&n,&m,&xi,&yi);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&x);
            a[i][j] = x;
        }
}
void bordare()
{
    for(int i=0;i<=n+1;i++)
        a[i][0]=a[i][m+1]=-1;
    for(int i=0;i<=m+1;i++)
        a[0][i]=a[n+1][i]=-1;
}
void afis()
{
    ok=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
}

void bk(int x, int y, int nr)
{
    if(a[x][y]==-1)
    {
        a[x][y]=nr;
        afis();
    }
    if(a[x][y]==0)
    {
        a[x][y]=nr;

        bk(x+1,y,nr+1);
        bk(x,y+1,nr+1);
        bk(x-1,y,nr+1);
        bk(x,y-1,nr+1);

        a[x][y]=0;
    }
}
int Problem13()
{
    citire();
    bordare();
    for(int i=0 ; i<=n+1 ; i++)
    {
        for(int j=0 ; j<=m+1 ; j++);
            //cout<<a[i][j]<<" ";
        //cout<<endl;
    }
    bk(xi,yi,1);
    //if(!ok)
        //afisNULL();
    return 0;
}

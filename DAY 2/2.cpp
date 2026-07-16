#include <stdio.h>
#define MAX 100
void findmax(int fsmax[],int row,int c,int dp[MAX][MAX])
{
    int fmax = dp[row][0];
    int smax = -1;
    int col;

    for(col = 1; col < c; col++)
    {
        if(dp[row][col] > fmax)
        {
            smax = fmax;
            fmax = dp[row][col];
        }
        else if(dp[row][col] > smax)
        {
            smax = dp[row][col];
        }
    }

    fsmax[0] = fmax;
    fsmax[1] = smax;
}

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[MAX][MAX], dp[MAX][MAX];
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);

            if(i == 0)
                dp[i][j] = arr[i][j];
        }
    }

    int fsmax[2];
    int row, col;

    for(row = 1; row < r; row++)
    {
        findmax(fsmax, row - 1, c, dp);

        for(col=0;col<c;col++)
        {
            if(dp[row-1][col]==fsmax[0])
                dp[row][col]=arr[row][col]+fsmax[1];
            else
                dp[row][col]=arr[row][col]+fsmax[0];
        }
    }
    findmax(fsmax,r-1,c,dp);
    printf("%d\n",fsmax[0]);
    return 0;
}

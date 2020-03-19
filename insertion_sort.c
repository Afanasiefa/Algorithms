#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 2, m = 5;
    int a[n][m];
    /*input data*/
    for(int i = 0; i<=n-1; i++)
        for(int x = 0; x<=m-1; x++)
        {
            scanf("%d", &a[i][x]);
        }
    /*insertion sorting in the first line of matrix*/
    int b, j;
    for(int i = 1; i <= m-1; i++){
        b = a[0][i];
        j = 0;
        while(a[0][j]<b){
            j++;
        }
        for(int k = i-1; k >=j; k--){
            a[0][k+1]=a[0][k];
        }
        a[0][j] = b;
    }
    for(int i = 0; i<=m-1; i++){
        printf("%d ", a[0][i]);
        }

    return 0;
    }

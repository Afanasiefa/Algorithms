#include <stdio.h>


int main(){

    int x = 1;
    int m = 3, n = 4;
    int a[m][n];

    printf("input matrix: \n");
    for(int j = 0; j<m; j++)
        for(int index = 0; index<n; index++){
            scanf("%d", &a[j][index]);
        }
    printf("results: ");


    int l, r = n - 1, i, foundedIndex;
    for(int j = 0; j<m; j++){

        l = 0;
        while (l <= r){
            i = l+(r-l)/2;

            if(x==a[j][i]){
                foundedIndex = i;
                goto check;
            }
            else if(x!=a[j][i]){
                if(x>a[j][i]){
                    l = i-1;
                }
                else if(x<a[j][i]) {
                    l = i+1;
                }
            }
        }
        check:
        if(l<=r){
            printf("\nin line %d found", j);
            printf(": a[%d][%d]", j, foundedIndex);
        }
        else if(l>r){printf("\nin line %d not found", j);}
    }


    return 0;
}

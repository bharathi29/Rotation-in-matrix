#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows :");
    scanf("%d",&m);
    printf("Enter the number of columns :");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the matrix elements :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=(n-1);j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
} 

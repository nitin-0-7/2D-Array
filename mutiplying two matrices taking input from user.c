/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m;
    printf("Enter no of rows for 1st matrix ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns for 1st matrix ");
    scanf("%d",&n);
    //input first matrix
    printf("Enter elements for 1st matrix \n");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r;
    printf("Enter no of rows for 2nd matrix ");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns for 2nd matrix ");
    scanf("%d",&c);
    //input second matrix
    printf("Enter elements for 2nd matrix \n");
    int b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=r){
        printf("Matrices cannot be multiplied ");
    }
    else{
        //multiply
        int res[m][c];
        printf("The multiplication of matrix Are :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<c;j++){
                res[i][j]=0;
                //i row a, j column of b
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
             for(int i=0;i<m;i++){
            for(int j=0;j<c;j++){
               printf("%d ",res[i][j]);
            }
            printf("\n");
        }

    }
    
    
    return 0;
}
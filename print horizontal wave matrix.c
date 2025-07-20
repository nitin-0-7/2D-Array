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
    //wave print
    printf("wave matrix are :\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
               printf("%d ",a[i][j]);
        }
        }
        else{
            for(int j=n-1;j>=0;j--){
               printf("%d ",a[i][j]);
        }
        }
        printf("\n");
    }
        
    return 0;
}
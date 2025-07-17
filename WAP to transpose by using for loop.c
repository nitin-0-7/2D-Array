/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter no of row : ");
    scanf("%d",&r);
    int c;
    printf("Enter no of column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Array __\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Your transpose matrix are :\n");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 
   0;
}
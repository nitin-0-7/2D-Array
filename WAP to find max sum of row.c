/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter row of the Array ");
    scanf("%d",&r);
    int c;
    printf("Enter column of the Array ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
    printf("Your Array is :\n");
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=0;
for(int i=0;i<r;i++){
    int rsum=0;
        for(int j=0;j<c;j++){
            rsum+=arr[i][j];
        }
         if(max<rsum){
        max=rsum;
    }
        printf(" your %d row sum values is %d \n",i+1,rsum);
    }
    printf(" max row sum is %d ",max);
    return 0;
}
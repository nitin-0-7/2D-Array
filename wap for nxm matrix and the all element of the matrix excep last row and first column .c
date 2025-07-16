/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter row of the array ");
    scanf("%d",&r);
    int c;
    printf("Enter column of the array ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter elements \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
int sum=0;
for(int i=0;i<r;i++){
    if(i==r-1) continue; //skip last row hoga isse
    for(int j=0;j<c;j++){
      if(j==0) continue;  //skip first column hoga isse
        sum+=arr[i][j];
    }
}
printf("\n");
printf("sum of array are %d ",sum);
    return 0;
}
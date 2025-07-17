/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of row & no of columns : ");
    scanf("%d",&n);
    int arr[n][n];  //nxn element (_bot row and column value are same)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Array __\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]); //original Array printing
        }
        printf("\n");
    }
    printf("Your transpose matrix are :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp=arr[i][j];  //swapping array
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);  //printing transpose array
        }
       printf("\n");
    }
    return 0;
   
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter no of rows ");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns ");
    scanf("%d",&c);
    printf("Enter elements in an array\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }
     printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
            
        }
         printf("\n");
    }
    int mr=0,mc=0;                //initialise the row(maximumum row(mr)) 
    int max=arr[0][0];           //initialise the column (maximumum column(mc)) 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];   
                mr=i;          //mr=i isliye kiye kuki i hee row pr run kr rha hai
                mc=j;          //mc=j isliye kiye kyuki j hee column pr run kr rha hai
            }
        }
         printf("\n");       
    }
    
    printf("The maximum value of an array is %d and it's index is (%d,%d) ",max,mr,mc);
    
    return 0;
}
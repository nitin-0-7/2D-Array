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
    
    int maxcount=0;         
    int maxidx=0;
    for(int i=0;i<r;i++){
        int count=0;      // Current row me 1s kitne hain
        for(int j=0;j<c;j++){
            if(arr[i][j]==1)  //checking value for one
            count++;
        }
                             
                             // Agar current row ka 1s count max se zyada hai to update karo
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
    }
    printf(" your maximum one count is %d in %d row ",maxcount,maxidx);
    return 
   0;
}
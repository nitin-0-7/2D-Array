
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
    scanf("%d",&c);                          //row & column ko input le liye user se
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");

        for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){                // row & column ka input print krdiye 
                printf("%d ",arr[i][j]);
             } 
             printf("\n"); //->   //this print matrix like view
}
    return 0;
}
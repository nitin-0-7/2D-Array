/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter row of the matrix ");
    scanf("%d",&r);
    int c;
    printf("Enter column of the matrix ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter element of the matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("vertically zigzag \n");
    for(int j=0;j<c;j++){ //kyuki hum vertically traverse kr rhe hai to isliye pehle j ke liye loop chalayenge
        if(j%2==0){
            for(int i=0;i<r;i++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
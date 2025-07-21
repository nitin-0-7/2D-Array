/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter row of the matrix :");
    scanf("%d",&r);
    int c;
    printf("Enter column of the matrix :");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your original matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int tne=r*c;
    int count=0;
    printf("your spiral matrix \n");
    while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
           count++;
        }
        minr++;

        //print the maximum column
    for(int i=minr;i<=maxr && count<tne;i++){
        printf("%d ",a[i][maxc]);
        count++;
    }
    maxc--;
    //print the maximum row
    for(int j=maxc;j>=minc && count<tne;j--){
        printf("%d ",a[maxr][j]);
        count++;
    }
    maxr--;
    //print the minimum column
    for(int i=maxr;i>=minr && count<tne;i--){
        printf("%d ",a[i][minc]);
        count++;
    }
    minc++;

    }
    
    return 0;
}
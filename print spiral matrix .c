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
    int spiral[r*c];
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

           spiral[count++]=a[minr][j];
        }
        minr++;

        //print the maximum column
    for(int i=minr;i<=maxr && count<tne;i++){
        spiral[count++]=a[i][maxc];
    }
    maxc--;
    //print the maximum row
    for(int j=maxc;j>=minc && count<tne;j--){
        spiral[count++]=a[maxr][j];
    }
    maxr--;
    //print the minimum column
    for(int i=maxr;i>=minr && count<tne;i--){
        spiral[count++]=a[i][minc];
    }
    minc++;

    }
     // Ab spiral array ko ek naye matrix b[][] me row-wise fill karte hain
    int b[r][c];
    int idx=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[i][j]=spiral[idx++];
        }
    }
    // Final spiral-ordered matrix print karna
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
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
    int min=arr[0][0];
    int mr=0,mc=0;  //mr=minimum row mc=minimum column (yha declare kiye int se aur initialize kiye 0 se) 
    for(int i=0;i<r;i++){     
        for(int j=0;j<c;j++){ 
            if(min>arr[i][j]){   //agar arr[i][j] chhota rha min value se to arr[i][j] ka jo value hai wo min ke barabar kardenge jisse hamara min value nikal jayega
                min=arr[i][j];
            mr=i;     //-> isse hume row value milega 
            mc=j;    //-> isse hume column value milega
            }
            
        }
        
    }
printf("The minimum value of a 2D array is %d and it's index at (%d,%d)",min,mr,mc);

    return 0;
}
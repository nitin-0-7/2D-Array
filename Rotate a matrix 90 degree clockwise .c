/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter row and column for nxn array :");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered elements for given rows and columns :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);  //orignal array 
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){   //conditions for transpose array
            int temp=arr[i][j];    
            arr[i][j]=arr[j][i];    
            arr[j][i]=temp;
           
        }
         
    }
    printf("Below are the transpose of the given matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){     
            printf("%d ",arr[i][j]);   //printing transpose array
        }
         printf("\n");
    }//rotate 
    printf("Below are the 90 degree rotated array\n");
    for(int i=0;i<n;i++){   //coditions for 90 degree clockwise rotated array
        int j=0;
        int k=n-1;
        while(j<k){
            //swap arr[i][j] and arr[i][k]
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<n;i++){       //printing 90 degree clockwise rotated array
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

 }   
 

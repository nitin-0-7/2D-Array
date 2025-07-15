/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter row of 1st array :");
    scanf("%d",&r);
    int c;                                     //pehla array ke liye rows aur column ka range user se liye  
    printf("Enter column of 1st array :");
    scanf("%d",&c);
    int a[r][c];                 
    printf("Enter elements of 1st Array\n");  // element liye user se 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    
    int v;
    printf("Enter row of 2nd array :");
    scanf("%d",&v);                           
    int h;
    printf("Enter column of 2nd array :");
    scanf("%d",&h);                        //dusra array ke liye rows aur coulumn ka range user se liye 
    int b[v][h];
    if(r!=v || c!=h){
        printf("You must enter same dimension to add 2D array ");
        return 1;              //agar array ka dimension same nhi hoga to addiition nhi hoga
    }
    printf("Enter Element of 2nd Array\n");    //element liye user se
    for(int i=0;i<v;i++){
        for(int j=0;j<h;j++){
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("\n");
    for(int i=0;i<v;i++){
        for(int j=0;j<h;j++){
            printf(" %d  ",b[i][j]+a[i][j]);
        }
        printf("\n");
    }
    
   
    return 0;
    
    
    }   
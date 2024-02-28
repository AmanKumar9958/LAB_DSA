// Multidimensional Array:
#include<stdio.h>
int main(){
    int arr[3][3];
    
    printf("Taking input from user: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter the element of row %d & column %d : ",i,j );
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Printing array: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
return 0;
}
//Bubble Sort
#include <stdio.h>
int main(){
    int arr[] = {13,12,2,1,10};
    printf("Before Array: \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("After sorting: \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}
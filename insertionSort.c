// Insertion Sort
#include<stdio.h>
int main(){
    int arr[] = {13,12,2,1,10};
    printf("Before Sorting: \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    int key;
    for(int i=0; i<5;i++){
        int key =arr[i];
        int j=i-1;
        while(key<arr[j]&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\n");
    printf("After Sorting: \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
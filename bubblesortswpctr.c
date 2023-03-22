//Asa Daboh 
//03-22-2023
//Computer Science Lab Assignment #7
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
    

}

void bubbleSort(int arr[], int x){
    
    bool sw; 
    int swaps[x];
    for(int i = 0; i < x; i++)
    swaps[i] = 0;

     for(int i = 0; i < x - 1;i++ ){
        sw = false;
        
        for(int j = 0; j < x - 1 - i; j++ ){
            if(arr[j] > arr[j +1]){
                swap(&arr[j], &arr[j+1]);
                sw = true;
                
            }

        }
        if(sw == false)
        break;

     }

    for(int i = 0; i < x; i++){
        printf("swaps at index %d : %d \n", i, swaps[i]);
    }

}

void printArray(int arr[], int x){
    for(int i = 0; i < x; i++){
        printf("%d ", arr[i]);

    }
    printf("\n");
}

void printSwapcount(){

}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int x = sizeof(arr)/sizeof(arr[0]);
    int swapctr = 0; 
    bubbleSort(arr, x);
    printf("Sorted Array: \n");
    printArray(arr, x);
    
}

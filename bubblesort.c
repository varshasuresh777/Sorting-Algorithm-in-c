#include<stdio.h>

void bubblesort(int arr[], int size){
    for(int i =0;i<size-1;i++){
        int swapped=0; 
        
        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                
                swapped =1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main(){
    int a[] = {-1,3,46, 47,62,23,56,43};
    int size = sizeof(a) / sizeof(a[0]);
    bubblesort(a,size); 
    printArray(a,size);
}


#include <stdio.h>
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
void insertionsort( int array[], int size){
    for(int i=1; i<size; i++ ){
        int key = array[i];
        int j=i-1; 
        
    // Compare key with each element on the //left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] //to key>array[j].
    while(key<array[j] && j>=0 ){
        array[j+1] = array[j];
        j--;
    }
    array[j+1]=key;
    }
}

   int main(){
    int a[] = {9, 5, 1, 4, 3};
    int size = sizeof(a) / sizeof(a[0]);
    insertionsort(a,size); 
    printArray(a,size);
}

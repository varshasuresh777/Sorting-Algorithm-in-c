#include<stdio.h>
void merge( int array[], int low, int mid, int high ){
    int temp[high-low+1];
    int i=low, j=mid+1,k=0;
    while(i<=mid&&j<= high){
        if (array[i] <= array[j]) {
            temp[k] = array[i];
            k+=1; i+=1; 
        }else{ 
            temp[k] = array[j]; 
            k+=1; j+=1; 
        }  }
        while(i <= mid) {
		temp[k] = array[i];
		k += 1; i += 1;
	}
        while(j <= high) {
		temp[k] = array[j];
		k += 1; j += 1;
	}
	for(i = low; i <= high; i += 1) {
		array[i] = temp[i - low];
	}

}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
void mergesort(int array[], int low, int high) {
  if (low < high) {
      int mid  = (low+high)/2; 
      mergesort(array, low, mid);
      mergesort(array, mid + 1, high);
      merge(array,low,mid,high ); 
      }
  }
int main()
{
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n =sizeof(arr) / sizeof(arr[0]);
    mergesort(arr,0,n-1);
    printf("sorted Array\n");
    printArray(arr,n);
    return 0; 
}

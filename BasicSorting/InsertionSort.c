#include <stdio.h>
void insertionSort(int arr[], int n){
  for(int i=1;i<n;i++){
    int k=arr[i],j=i-1;
    while(j>=0 && arr[j]>k){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=k;
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
int main(void) {
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  pritnf("The array after Insertion Sort: ");
  insertionSort(arr,n);
  return 0;
}
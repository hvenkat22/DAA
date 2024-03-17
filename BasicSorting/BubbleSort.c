#include <stdio.h>

#include<stdio.h>
void bubblesort(int arr[], int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
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
  printf("The array after Bubble Sort: ");
  bubblesort(arr,n);
  return 0;
}
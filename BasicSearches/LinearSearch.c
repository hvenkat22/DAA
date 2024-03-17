#include <stdio.h>
int LinearSearch(int arr[], int n, int x){
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      return i;
    }
  }
  return -1;
}
int main(void) {
  int n,x;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d",&x);
  int result = LinearSearch(arr,n,x);
  if(result==-1){
    printf("Element is not present in the array");
  }else{
    printf("Element %d is present at index: %d",x,result);
  }
}
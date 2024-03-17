//Hari Venkataraman
//Worst Case: O(logn), Best Case: O(1), Average case: O(logn)
#include <stdio.h>
int BinSearch(int arr[],int i,int l,int x){
  if(l==i){
    if(arr[i]==x){
      return i;
    }
    return -1;
  }else{
    int mid=(i+l)/2;
    if(arr[mid]==x){
      return mid;
    }else if(x<arr[mid]){
      return BinSearch(arr,i,mid-1,x);
    }else{
      return BinSearch(arr,mid+1,l,x);
    }
  }
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
  int result=BinSearch(arr,0,n-1,x);
  if(result==-1){
    printf("Element not found");
  }else{
    printf("Element found at index %d",result);
  }
}
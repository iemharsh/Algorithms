#include<stdio.h>

int main() {
  //dummy array
  int arr[] = {34, -32, -12, -45, 12};
  int i, j, t;
  //outer loop for iterating one less than the number of elements
  for(i = 5; i > 1; i--) {
    //inner loop to put the biggest number in the end
    for(j = 0; j < i; j++) {
      if(arr[j] >= arr[j + 1]) {
        t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
  printf("Sorted Array---\n");
  for(i = 0; i < 5; i++) {
    printf("%d\t", arr[i]);
  }
  return 0;
}

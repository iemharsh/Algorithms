#include<stdio.h>

int linearSearch(int *start, int size, int element);


int main() {
  int a[] = {10, 5, 8, 9, 7, 23, 56};
  int position = linearSearch(a, 7, 23);
  if(position != -1)
    printf("Element found at: %d postion\n", position);
  else
    printf("Element not found\n");
  return 0;
}


//LinearSearch
int linearSearch(int *pointer, int size, int toFind) {
    int c;
    //traversing through the array
    for(c = 0; c < size; c++) {
      if(*(pointer + c) == toFind) {   // if toFind is found then return the position according to array index
        return c;
      }
    }
    //else return -1 for not found
    return -1;
}

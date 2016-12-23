#include<stdio.h>

int binarySearch(int a[], int size, int toFind);

int main() {
    int a[] = {10, 12, 43, 54, 65, 76, 80, 83, 90, 99};
    int position = binarySearch(a, 10, 76);
    printf("position: %d\n", position);
    return 0;
}

int binarySearch(int a[], int size, int toFind) {
    int low = 0;
    int high = size;
    int mid = (low + high) / 2;
    //traverse untill we find the toFind or the mid is equal to low or high
    //if mid == low || mid == high that means toFind is not in the array
    while(a[mid] != toFind) {
        if(a[mid] > toFind) {
            high = mid;
        } else {
            low = mid;
        }
        mid = (low + high) / 2;
        if(low == mid || mid == high)
            break;
    }
    //check against the mid index in the array if its equal to toFind then the toFind is Found else not
    //return position if found else -1 for not found
    if(a[mid] == toFind)
        return mid;
    else
        return -1;
}

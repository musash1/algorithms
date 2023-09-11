#include <stdio.h>

int binarySearc(int nums[], int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target) {
      return mid;
    }
    if (nums[mid] > target) {
      high = mid - 1;
    }
    if (nums[mid] < target) {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int nums[] = {2, 3, 5 ,7, 9};
  int num = 7;
  int n = sizeof(nums) / sizeof(nums[0]) - 1;
 
  int res = binarySearc(nums, n, num);
  printf("Index: %d", res); 
  
  return 0;
}

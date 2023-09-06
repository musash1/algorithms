#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = (int)&argv[1];
  int res = 1;

  for (int i = 1; i <= n; i++) {
    res *= i; 
  }
  
  printf("%d", res);

  return 0;
}

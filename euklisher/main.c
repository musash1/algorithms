#include <stdio.h>

int oldVariant(int a, int b) {
  if (a == 0) {
    printf("%d", b);
    return a;
  }
  
  while(b) {
    if (a > b) {
      a = a - b;
      continue;
    }
    b = b - a;
  }
  return a;
}

int newVariant(int a, int b) {
  if (a == 0) {
    return b;
  }
  return newVariant(b % a, a);
}

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  int resultOld = oldVariant(a, b); 
  int resultNew = newVariant(a, b);

  printf("old Variant = %d \n", resultOld);
  printf("new Variant = %d", resultNew);

  return 0;
}

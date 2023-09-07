#include <stdio.h>
#include <stdlib.h>

int main() {
  int m;
  scanf("%d", &m);
  int n = m - 1;
  int numbers[n]; 
  
  for (int i = 0; i < n; i++) {
    numbers[i] = 2 + i; 
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] == 1) {
      continue;
    }
    if (i == 0) {
      for (int j = 2; j < n; j += 2) {
        numbers[j] = 1;
      }
      continue;
    }
    for (int j = i + numbers[i]; j < n; j += numbers[i]) {
     numbers[j] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] != 1) {
      printf("%d ", numbers[i]);
    }
  }

  return 0;
}

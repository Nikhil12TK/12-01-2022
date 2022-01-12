#include <stdio.h>

void main() {
   int arr[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10;
   int i, j, p, s;
   for (i = 0; i < (n - 1); i++) {
      p= i;
      for (j = i + 1; j < n; j++) {
         if (arr[p] < arr[j])
            p = j;
      }
      if (p != i) {
         s = arr[i];
         arr[i] = arr[p];
         arr[p] = s;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
}

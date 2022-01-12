#include <stdio.h>
void bubbleSort(int a[], int size)
{

  for (int i = 0; i < size - 1; ++i) 
  {
    
    for (int j = 0; j < size - i- 1; ++j)
    {
      
   
    if (a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("Sorted Array in Ascending Order:\n");
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", a[i]);
  }
  printf("\n");
}
void main() {
  int data[] = {-2, 45, 0, 11, -9,15};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
 }


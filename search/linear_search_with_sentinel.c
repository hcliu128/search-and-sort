#include <stdio.h> 

int linearSearchwithSentinel(int a[], int n, int x) {  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == x && i != n-1)  
        return i+1;  
    }  
  return -1;  
}  

int main(void) { 
  int a[] = {5, 4, 3, 2, 1}; 
  int x; 
  printf("Input the num that u want to search for which in ");
  int n = sizeof(a) / sizeof(a[0]); 
  for (int j = 0; j < n; j++)
    printf("%d ", a[j]);
  printf("\n");
  scanf("%d", &x); 
  a[n] = x;
  int res = linearSearchwithSentinel(a, n + 1, x); 
  if (res == -1)  
    printf("Element is not found");  
  else  
    printf("Element is found at %d-place", res);  
  return 0;
}  
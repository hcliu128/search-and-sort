#include <stdio.h> 

int linearSearch(int a[], int n, int x) {  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == x)  
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
  scanf("%d", &x); 
  int res = linearSearch(a, n, x); 
  if (res == -1)  
    printf("Element is not found");  
  else  
    printf("Element is found at %d", res);  
  return 0;
}  
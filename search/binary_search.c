#include <stdio.h> 

int binarySearch(int a[], int front, int rear, int x) {  
//x is the value that u want to search
  while (front <= rear){
    int middle = (front + rear)/2;
    if (a[middle] == x)
    return middle ; 
    else{
        if (a[middle] < x)
        front = middle + 1;
        if (a[middle] > x)
        rear = middle - 1;
    }
  }
  return -1; 
}  

int main(void) { 
  int a[] = {2, 4, 6, 10, 11, 13, 16, 17, 18}; 
  int x; 
  printf("Input the num that u want to search for which in ");
  int n = sizeof(a) / sizeof(a[0]); 
  for (int j = 0; j < n; j++)
    printf("%d ", a[j]);
  printf("\n");
  scanf("%d", &x); 
  int res = binarySearch(a, 0, n-1, x); 
  if (res != -1)
  printf("%d is found at %d", x, res);
  else
  printf("Not found");

}  
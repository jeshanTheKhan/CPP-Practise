#include <stdio.h>
int search(int array[], int n, int x) {
for (int i = 0; i < n; i++)
if (array[i] == x)
return i;
return -1;
}
int main() {
int n;
printf("Enter Element Number:\n");
scanf("%d",&n);
int array[n];
printf("Enter Array :\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &array[i]);
}
int x;
printf("Enter search Value \n");
scanf("%d",&x);
int m = sizeof(array) / sizeof(array[0]);
int result = search(array, m, x);
if (result == -1) 
{
    printf("Element not found");
}
else{
printf("Element found at index: %d", result);
}
}
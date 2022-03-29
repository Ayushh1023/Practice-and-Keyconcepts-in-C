#include <stdio.h>
int main()
{
   int i, n;
   printf("Enter size of array:");
   scanf("%d", &n);
   int A[100];
   for (i = 0; i < n; i++)
   {
      scanf("%d", &A[i]);
   }
   for (i = 0; i < n; i++)
   {
      printf("The elements are %d\n", A[i]);
   }
   return 0;
}
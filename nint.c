#include <stdio.h>
i main()
{
  int array[100], min, n, i, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  min = array[0];
 
  for (i = 1; i < n; i++)
  {
    if (array[i] < min)
    {
       min  = array[i];
       location = i+1;
    }
  }
 

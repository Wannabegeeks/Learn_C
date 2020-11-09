//linear search
#include <stdio.h>
int main()
{
  int array[20], search, i, n;

  printf("Enter number of elements in array\n");         //taking the number of array in which we need to search the element 
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);                    

  for (i=0;i<n;i++)                                      //running a loop to take the array
    scanf("%d", &array[i]); 

  printf("Enter a number to search\n");                  //taking the number to search in the array      
  scanf("%d", &search);

  for (i=0; i<n;i++)
  {
    if (array[i]==search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}

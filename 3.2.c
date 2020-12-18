#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
 
void bubble(int *num, int size);

int main()
{
  int a[n]; 
  int i; 
  int j; 
  int b;
  srand(time(NULL));
  for (i = 0; i < n; i++) 
  {
    a[i] = rand() % 100;
    printf("%3d", a[i]);
  }
    printf("\n");
 
    for (i=0; i < n-1; i++) 
    {
        for (j=0; j < n-i-1; j++) 
        {
            if (a[j] > a[j+1]) 
            {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
 
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");

  return 0;
}
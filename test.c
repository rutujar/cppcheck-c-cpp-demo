#include <stdio.h>
 
int main()
{
  int c, n=20, fact = 1;
 

 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}

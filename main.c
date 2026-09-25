#include<stdio.h>

// palindrome checker

int main()
{
  int result = 0, rem, q, n;
  printf("Enter the number\n");
  scanf("%d",&n);
  for(q = n; q != 0; result = result*10 + rem)
  {
    rem = q%10;
    q = q/10;
  }
  if (result == n)
    printf("palindrome\n");
  else
    printf("not\n");
    check_memory();
  return 0;
}

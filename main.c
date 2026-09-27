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

// Armstrong number checker 

int main(void)
{
  int number, count =0, result=0, multiply=1, cnt, rem;
  printf("Enter a number\n");
  scanf("%d", &number);

  int q = number;

  while(q!=0)
  {
    q = q/10;
    count++;
  }
  
  printf("Number of digits in %d is %d\n", number, count);

  cnt = count;
  q = number;
  while(q!=0)
  {
    rem = q%10;
    while(cnt != 0)
    {
      multiply = multiply*rem;
      cnt--;
    }
    result= result+ multiply;
    cnt = count;
    q = q/10;
    multiply=1;
  }
  if (result == number)
    printf("%d is an Armstrong number", number);
  else 
    printf("%d is not an Armstrong", number);
}

// Armstrong number chencker but for an interval


int main(void)
{
  int a,q, b, i, number, count =0, result=0, multiply=1, cnt, rem;
  printf("Enter a number interval\n");
  scanf("%d %d", &a, &b);
  
for (i = a; i <= b; i++)
{
  q = i;
  while(q!=0)
  {
    q = q/10;
    count++;
  }
  
  cnt = count;
  q = i;
  while(q!=0)
  {
    rem = q%10;
    while(cnt != 0)
    {
      multiply = multiply*rem;
      cnt--;
    }
    result= result+ multiply;
    cnt = count;
    q = q/10;
    multiply=1;
  }

  if (result == i)
    printf("%d is an Armstrong number\n", i);
  else ;
  count =0;
  result =0;
}  
  return 0;
}

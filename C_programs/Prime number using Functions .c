#include<stdio.h>
int is_prime(int n)   //Function definition to check if the number is prime or not
{
if(n<=1)  // Number less than 1 is not prime
return 0;
}
for(i=2; i*i<=n; i++)
  if(i%n==0)
{
  printf("%d is a not a prime number\n",n);
    }
    else
    {
    printf("%d is a prime number\n",n);
    }
int main()  
    {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
if(is_prime(num))
    {
        printf("%d is a prime number\n", num);
    }
else
  {
        printf("%d is not a prime number\n", num);
  }
  return 0;
    }

    
  

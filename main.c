#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int i;
	int result = 1;
	for (i = 1; n >= i; n--)
		result *= n;
	return result;
}

int get_integer()
{
  int num;
	printf("input an integer:");
	scanf("%i", &num);

  return num;
}

int combination(int n, int r)
{
	return factorial(n) / factorial(r) / factorial(n - r);
}

int main()
{
  int n,r,result;
  n=get_integer();
  r=get_integer();
  result=combination(n,r);

  printf("combination result is %i\n",result);
}

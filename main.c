#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}

int square(int n)
{
	int square=1;
	square=n*n;
	return square;
}

int get_max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main(int argc, char *argv[]) {
	
	printf("sumTwo : %i\n",sumTwo(1,2));
	printf("square : %i\n",square(5));
	printf("get_max : %i\n",get_max(10,30));
	
	return 0;
}

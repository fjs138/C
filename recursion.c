#include <stdio.h>
// 5! = 5 x 4 x 3 x 2 x 1 = 
// 1! = 1
// 0! = 1

//5! = 5 x (5-1)!
//5! = 5 x 4!
//5! = 5 x 4 x 3 x 2 x 1

//factorial function
// n! = n x (n-1)!
// and if 1 or 0, then 1
double factorial(double n)
{
	if (n<=1)
		{
		return 1;	/* code */
		}
	return n * factorial(n-1);
}
	
int main()
{
	double number;
	printf("Please enter a number to find it's factorial\n");
	scanf("%lf", &number);
	printf("%lf\n", factorial(number));
	return 0;
}
#include<stdio.h>

/*
For question 4a we are implementing a given algorithm to work out the Greatest Common
Divisor(GCD) between 2 integers entered by the user. The code below assumes that the user
entered 2 values, any additional values are ignored. It also assumes integers are entered,
but if certain strings are entered, the code breaks and specific numbers are assigned to
the two inputted values, carrying out the algorithm as normal. Since the variables involve
int, the maximum possible value that can be entered in this code is 2147483647.
*/

int GCD(int a, int b)
//initialise the function
{
	while (b != 0)
	//checks if b is not 0, otherwise it will return a directly
	{
		if(a > b) 
		//algorithm works by subtracting the larger number with the smaller one
		{
			a = a - b; 
			//variable with the larger value will store the difference, in this case in a
			printf("a > b, a = a - b , so now a = %d and b = %d \n", a, b);
		}
		else
		{
			b = b - a;
			//variable with the larger value will store the difference, in this case in a
			printf("a < b, b = b - a, so now a = %d and b = %d \n", a, b);
		}
	}
	return a;
	//b is zero at this point, therefore a is returned
}

int main()
{
	int a,b,result;
	//initialise the values
	printf("Please enter two positive integers: \n");
	//this is assuming no letters are entered otherwise the code breaks
	scanf("%d %d", &a, &b);
	//save the inputs into variables, ignores anything that is entered after the first 2 values
	if (a < 0 || b < 0) //check if the values are not negative
	{
		printf("Enter positive integers only \n");
		return 0;
		//close the program if any of the values are negative
	}
	else if (a == 0)
	//The GCD between 0 and another number would be the other number, since 0 can be divided by all numbers
	{
		printf("Let a = %d and b = %d \nSince a = 0, its factors can be any number \n", a, b);
		result = a;
	}
	else
	{
		printf("Let a = %d and b = %d \n", a, b);
		//saves the two values in variables and shows how the algorithm works
		result =  GCD(a, b);
		//use the GCD algorithm implemented in the function with the values entered
	}
	printf("Therefore GCD is: %d \n", result);
	//output the resulting value, which is the GCD of the two values inputted
}
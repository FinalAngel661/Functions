#include <iostream>

/*
	single responsibility principle
	seperation of input, output, update

	void Update()
	{
	
	
	}

	void draw()
	{
	
		
	
	
	}

*/



float E_scanNum()
{
	float result = 0;
	printf("Input one float: ");
	scanf_s("%f", result);
	getchar();
	return result;
}


float E_getMax(float a, float b)
{
	if (a > b)
		return b;
	else
		return a;
}


void main()
{




}
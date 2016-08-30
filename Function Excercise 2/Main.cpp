#include <iostream>
 /*
float in1 = 0;
float in2 = 0;


int LesserorGreater(float in1, float in2)
{
	if (in1 > in2)
	{
		printf(" %f ", in1);
		return in1;
	}
	else if (in1 < in2)
	{
		printf(" %f ", in2);
		return in2;
	}
	else if (in1 == in2)
	{
		printf("you can't enter the same number!\n");

	}

}

void printNum(float n) { printf("%f %f", in1, in2); }


int scanNum()
{
	scanf_s("%f %f", &in1, &in2);

	return LesserorGreater(in1, in2);
}
*/

float E_scanNum();
float E_getMax(float a, float b);


int main()
{
	printf("Please input 2 floats.\n");
	
	/*
	scanNum();
	LesserorGreater(in1, in2);

	system("pause");
	*/


	float val1 = E_scanNum();
	float val2 = E_scanNum();

	float result = E_getMax(val1, val2);

	printf("%f is the larger number: ", result);

	getchar();
}

////////////////////////////////////////////
///////////////////


// Modularity
	// How reusable are these functions?

// Clarity
	// How much do these functions do?


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
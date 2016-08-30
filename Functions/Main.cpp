#include <iostream>

//how to make a function
//<return type> <alias>(<parameter list>)
//{ code goes here... }

void printNum(int n);

// this means that the function will be created soon.. 
//mostly used for organization.
//extern void printNum(int v)






//Multiply parameters together then subtract result from PHS
int MulthenSub(int a_param/*=3*/, int a_param2/*=12*/)
{
	printNum(a_param);
	if (a_param % 2 == 0)
		return a_param * a_param2 -  a_param2;
	else
		return a_param * a_param2 - a_param;

}


void printNum(int n){	printf("%d", n); }

void printNum(int n, int a) 
{ 
	
	printNum(n);  
	printNum(a);

}


int scanNum()
{
	int var = 0;
	scanf_s("%d", &var);
	getchar();
	return var;
}

/*
int AlwaysReturn5(int a_param, int a_param2)
{



}
*/


void initArray(int values[], int size, int value)
{
	for (int i = 0; i < size; ++i)
		values[i] = value;

	
		

}


void printArray(int values[], int size)
{
	for (int i = 0; i < size; ++i)
		printNum(values[i]);
}

int main()
{

	int blah[40];
	initArray(blah, 40, 0);
	printArray(blah, 40);

	//MulthenSub(3, 12);

	//int result = 3 * MulthenSub(scanNum()), scanNum();
	
	printf("how many times do i like to run?");
	int times = scanNum();
	for(int i = 0; i < times; ++i)
		printNum(3 * MulthenSub(scanNum(), scanNum()));
	printf("finished!");

	getchar();

}



/*


int inputRange(int start, int end);
{
	int input = 0;
	do
	{
		printf("Input a number between %d and %d: ", start, end);
		scanf_s("%d", &input);
		getchar();
	}while(input < start || input > end)
}

void main()
{
	
	getchar();

}

int solvebattle(int p1, int p2)
{
	

}



*/
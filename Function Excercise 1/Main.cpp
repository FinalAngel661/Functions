#include <iostream>

void printNum(int var) { printf("%d", var); }



int main()
{
		int thevar = 1;
		printNum(thevar);
		{
			printNum(thevar);
			int thevar = 2;
			printNum(thevar);
			{
				printNum(thevar);
				int thevar = 3;
				printNum(thevar);

			}
			printNum(thevar);
		}
		printNum(thevar);
		getchar();

}
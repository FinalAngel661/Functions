#include <iostream>
#include <cstdlib>
#include <ctime>

/*
int scanNum();
int RockPaperorScissor();

int randRange(int start, int end)
{

	return rand() % (end - start + 1) + start;

}


int RockPaperorScissor()
{
	switch (result)
	{
	case 1:
		printf("You chose Rock.");
		break;
	case 2:
		printf("You chose Paper.");
		break;
	case 3:
		printf("You chose Scissors.");
		break;
	case 4:
		printf("I thought I told you to input 1-3.");
		break;
	default:
		break;

	}
}


int scanNum()
{
	int result = 0;
	printf("Input one of the following... 1, 2, or 3: ");
	scanf_s("%d", result);
	getchar();
	return result;
}


int main()
{
	rand() % 3 + 1;
	randRange(1, 3);
	RockPaperorScissor();
	scanNum();
	system("pause");
}
*/



/*
int solveBattle(int p1, int p2);
int randRange(int start, int end);
int inputRange(int start, int end);
void printAction(int action);


void main()
{
	int player = 0, computer = 0, result = 0;
	printf("Lets play Rock, Paper, Scissors!\n");
	printf("1: rock, 2: paper, 3: scissors.\n\n");

	while (result == 0)
	{
		computer = randRange(1, 3);
		player = inputRange(1, 3);

		printf("Player does: ");
		printAction(player);
		printf("\nComputer does: ");
		printAction(computer);
		printf("\n");

		result = solveBattle(player, computer);

		switch (result)
		{
		case 0: printf("A tie! Continue the battle!\n\n");
		case 1: printf("Player won!\n");
		case 2: printf(The computer wins!\n);
		}

	}
	getchar();
}

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


int solvebattle(int p1, int p2)
{
	

}


int randRange(int start, int end)
{

return rand() % (end - start + 1) + start;

}


*/
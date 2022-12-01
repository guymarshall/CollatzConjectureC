#include <stdio.h>

int collatz(int number)
{
	int counter = 0;
	while (number > 1)
	{
		counter++;
		if (number % 2 == 0)
		{
			number = number / 2;
		}
		else
		{
			number = (3 * number) + 1;
		}
	}

	return counter;
}


int main()
{
	printf("Enter a whole number: ");
	int number;
	scanf("%i", &number);
	
	printf("ALL (0) or ONE (1): ");
	int choice;
	scanf("%i", &choice);

	if (choice == 0)
	{
		for (int i = 0; i < number; i++)
		{
			printf("%i: %i\n", i, collatz(i));
		}
	}
	else if (choice == 1)
	{
		printf("%i: %i\n", number, collatz(number));
	}
}
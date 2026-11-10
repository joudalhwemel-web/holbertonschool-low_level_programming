#include <stdio.h>

/**
 * main - Simple calculator with addition
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice;
	int a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		fflush(stdout);

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}

		if (choice == 1)
		{
			printf("A: ");
			fflush(stdout);
			if (scanf("%d", &a) != 1)
				return (1);

			printf("B: ");
			fflush(stdout);
			if (scanf("%d", &b) != 1)
				return (1);

			printf("Result: %d\n", a + b);
		}
	}

	return (0);
}

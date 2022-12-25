#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int N;

	int i = 0;

	int random = 0;

	srand((unsigned int)(time(NULL)));

	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char numbers[] = "0123456789";

	char symbol[] = "!@#$^&*?";

	char password = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", pasword[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4
			printf("%c", password[i]);

		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", passwor[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	printf("%s", password);

	return (0);

}


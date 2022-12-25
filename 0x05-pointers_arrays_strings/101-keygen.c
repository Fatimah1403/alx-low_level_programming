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
	char password[84];
	int index = 0, sum = 0, x1, x2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		x1 = (sum - 2772) / 2;
		x2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + x1))
			{
				password[index] -= x1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + x2))
			{
				password[index] -= x2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);


}

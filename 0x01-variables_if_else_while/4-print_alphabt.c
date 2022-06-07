#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Succes)
 *
 * This porgram prints all alphabets in lowercase but skips the letter q and e
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if ((low == 'e') || (low =='q'))
			low++;
		else
			putchar(low);
	}
	printf("\n");
	return (0);
}

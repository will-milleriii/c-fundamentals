#include <stdio.h>

int main(void)
{
	char input[64] = "Hi,  How   Are  You?";
	char output[64];
	int previousIsSpace;	//top level previous var
	// loop over input
	// current = input[i]
	// if input[i] == previous, omit, 
	// else add to output
	int i, j;
	i = 0;
	j = 0;
	previousIsSpace = 0;
	while(input[i] != '\0')
	{
		if (input[i] == ' ')
		{
			if (!previousIsSpace)
			{
				output[j++] = ' ';
				previousIsSpace = 1;
			}
		} else 
		{
			output[j++] = input[i];
			previousIsSpace = 0;
		}

		i++;
	}
	output[j] = '\0';
	printf("%s", output);


	int c, pc;
	pc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && pc != ' ')
				putchar(c);
		else
			putchar(c);

		pc = c;
	}

	return 0;
}


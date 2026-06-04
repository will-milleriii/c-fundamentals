#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	// Tested w/ input: "This is fun"
	int c;
	state = OUT;
	while ((c = getchar()) != EOF)
	{
		// if we have a char print it
		if (c == ' ' || c == ='\t' || c == '\n\)
			state = OUT;
		else  if (state == OUT)
		{
			state = IN;
			putchar('\n');
		}
			putchar(c);
	}
	return 0;
}

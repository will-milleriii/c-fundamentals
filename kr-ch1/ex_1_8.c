#include <stdio.h>

int main(void)
{
	int tabs, spaces, nl, c;
	tabs = 0;
	spaces = 0;
	nl = 0;
	c = 0;
	while((c = getchar()) != EOF)
	{

		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tabs;
		else if (c == ' ')
			++spaces;

	}

	printf("%d\n", nl);
	printf("%d\n", tabs);
	printf("%d\n", spaces);
	return 0;
}

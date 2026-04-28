#include <stdio.h>

int main(void)
{
	int c = getchar() != EOF;
	int d = getchar() == EOF;
	printf("%d", c);
	printf("%d", d);

	return 0;
}

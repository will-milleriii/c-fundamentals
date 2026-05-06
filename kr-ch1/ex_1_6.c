#include <stdio.h>

int main(void)
{
	int c = getchar() != EOF;
	int d = getchar() == EOF;
	
	printf("%d", c);
	printf("%d", d);
	printf("The value of EOF is %d\n\n", EOF);

	return 0;
}

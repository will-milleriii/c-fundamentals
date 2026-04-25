#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main(void)
{
	int len;
	char line[MAXLINE];
	len = getline(line, MAXLINE);
	printf("%d\n", len);
}

int getline(char s[], int limit)
{
	int c, i;

	for (i = 0; i < limit-1 && (c=getchar()) != EOF && c != '\n'; i++)
		s[i] = c;

	if (c == '\n')
	{
	   s[i] = c;
	   i++;
	}

	s[i] = '\0';
	return i;
			
}

// first attempt at writing small code snippets in nvm
// wish me luck
// K&R Excercise 5-3: strcat (s,t) using pointers
// should copy string t to the end of s IF s has enough space
//
// goal is to learn about pointer arithmetic for traversali
#include <stdio.h>
#include <string.h>

void strcatpointer(char *, char *);
void strcatv2(char *, char *);
int main(void) 
{
	char orig[64] = "Hello World. ";
	char appended[64] = "How are you?";
	
	strcatpointer(orig, appended);
	printf("%s\n", orig);

	//empty test case
	char orig2[64] = "";
	strcatpointer(orig2, "Hello");
	printf("%s\n", orig2);

	//empty target
	char orig3[64] = "Hello";
	strcatpointer(orig3, "");
	printf("%s\n", orig3);

	//updated method
	char original[64] = "Learning C ";
	strcatv2(original, "Is Fun!");
	printf("%s\n", original);
	return 0;
}

void strcatpointer(char *orig, char *appended)
{
	

	while (*orig != '\0')
	{
		orig++;
	}
	while (*appended != '\0')
	{
		*orig = *appended;
		orig++;
		appended++;
	}
	*orig = '\0';
}

void strcatv2(char *s, char *t)
{
	while(*s)
	    s++;


	while ((*s++ = *t++))
	    ;
	
}

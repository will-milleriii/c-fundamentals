//K&R ex 5.4 write function strend(x, t) which returns 1 if string t occurs at the end of string s
//and 0 otherwise
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);
int getLen(char *);

int main(void)
{
   // case 1: returns 1
   char s[64] = "hello";
   char t[64] = "lo";
   
   int result = strend(s, t);
   printf("%d\n", result);
   
   // case 2: t > s -> return 0;
   char start[64] = "lo";
   char tail[64] = "hello";
   int res = strend(start, tail);
   printf("%d\n", res);

   // case 3: t != splice of s -> return 0
   char st[64] = "begin";
   char ta[64] = "end";
   int results = strend(st, ta);
   printf("%d\n", results);

   return 0;

}

int strend(char *s, char *t)
{
	int sLen = getLen(s);
	int tLen = getLen(t);
	//int sLen = strlen(s);
	//int tLen = strlen(t);
	
	// t length > s length bail. nothing else to do
	if (tLen > sLen) 
		return 0;

	s += (sLen - tLen);
	
	while(*s++ == *t++)
	{
		if (*s == '\0')
			return 1;
	}		

	return 0;
}

// rudimentary get length function. wanted to flesh this out 
// instedf of just using strlen()
int getLen(char *word)
{
	int length = 0;
	while (word[length])
		length++;

	return length;
}

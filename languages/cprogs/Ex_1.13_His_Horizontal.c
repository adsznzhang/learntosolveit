/*print a horizontal histogram of words in the input */
#include <stdio.h>
int main(void)
{
	int c;
	int inspace;
	inspace = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' '||c=='\n'||c=='\t')
		{
			if (inspace == 0)
			{
				inspace = 1;
				putchar('\n');
			}
		}
		else 
		{
			inspace = 0;
			putchar('*');
		}
	}
	return 0;
}


#include "path.h"

/* read user input */
char *read_input(void) 
{
        char *line = NULL;
        size_t bufsize = 0;

        getline(&line, &bufsize, stdin);
        return (line);
}

/* writes/print string to stdin */
void printString(char *str) 
{
	size_t len = getStringLength(str);
	write(STDOUT_FILENO, str, len);
}

/* gets no. of xters in a string */
int getStringLength(const char *str) 
{
	int length = 0;
	while (*str != '\0') 
	{
		length++;
		str++;
	}
	return (length);
}

/* writes string to stderr */
void writeStringToStderr(char *str) 
{
	size_t len = getStringLength(str);

	write(STDERR_FILENO, str, len);
}
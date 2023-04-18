#include "path.h"

/* joins two strings together */
char* concatenateStrings(char *str1, char *str2) 
{
	int len1 = getStringLength(str1);
	int len2 = getStringLength(str2);
	char *result = malloc(len1 + len2 + 1); /* add one for null terminator */

	if (result == NULL) 
	{
		perror("Failed to allocate memory for concatenated string");
		exit(1);
	}
	result = myStrcpy(result, str1);
	result = myStrcat(result, str2);
	return (result);
}

/* copies contents of one string to another string */
char* myStrcpy(char *dest, const char *src) 
{
	char *originalDest = dest; /* save the original pointer to dest */

	while (*src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}

/* concatenates two strings */
char* myStrcat(char *dest, const char *src) 
{
	char *originalDest = dest; /* save the original pointer to dest */
	
	while (*dest != '\0') 
	{
		dest++;
	}
	while (*src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}

/* compares two strings, checks if they are equal */
int myStrncmp(const char *s1, const char *s2, size_t n) 
{
	size_t i;

	for (i = 0; i < n; i++) 
	{
		if (*s1 == '\0' || *s1 != *s2) 
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

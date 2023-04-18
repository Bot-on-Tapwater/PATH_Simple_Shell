#ifndef PATH_H
#define PATH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX_ARGS 64
#define MAX_PATH 1024
#define DELIMITERS " \t\r\n\a"

char *read_input(void);
char **parse_input(char *line);
int execute_command(char **args, char *path[]);
void printString(char *str);
int getStringLength(const char *str);
void writeStringToStderr(char *str);
char *_getenv(const char *name);
char* concatenateStrings(char *str1, char *str2);
char* myStrcpy(char *dest, const char *src);
char* myStrcat(char *dest, const char *src);
int myStrncmp(const char *s1, const char *s2, size_t n);
int myStrncmp(const char *s1, const char *s2, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_realloc(void *ptr, size_t size);
char **get_path_directories();
#endif

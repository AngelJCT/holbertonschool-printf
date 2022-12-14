#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int get_string(char *s);
int get_char(char c);
char* _itoa(int num, char *str, int base);
#endif

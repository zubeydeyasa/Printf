#include <stdio.h>
#include <stdarg.h>


int sakinol(char *str,...)
{
	va_list a;
	va_start(a, str)
	va_arg(a, *char) 
}

int main()
{
	sakinol("%x",15);
}
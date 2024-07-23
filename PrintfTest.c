#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);

	va_arg(args, int);

	
	va_end;
}

int main()
{
    int result = printf("Sentence to know how many %s\n", "characters were written123456789");
    
    printf("%d characters were written", result);
}

/*
int main()
{
	printf("hello my name is Laura and i'm 23 years old\n");
	printf("hello my name is %s and i'm %d years old\n", "Laura", 22);
}
*/

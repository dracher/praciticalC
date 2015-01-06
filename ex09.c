#include <stdio.h>


int main(int argc, char const *argv[])
{
	int i_ascii_code;
	char ascii;

	printf("Please input a number: ");
	scanf("%d", &i_ascii_code);

	ascii = i_ascii_code;

	printf("%d translate to ascii is %c\n", i_ascii_code, ascii);

	return 0;
}
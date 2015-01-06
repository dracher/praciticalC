#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char first_name[] = "erich";
	char last_name[] = "king";

	printf("%s %s\n", first_name, last_name);
	printf("%s\n%s\n", first_name, last_name);
	printf("%s ", first_name);
	printf("%s\n", last_name);

	return EXIT_SUCCESS;
}
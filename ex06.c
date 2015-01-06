#include <stdio.h>

#define conj(name, index) name##index

int main(int argc, char const *argv[])
{
	char s3[] = "Smile!Smile!Smile!";
	char s2[] = "Smile!Smile!";
	char s1[] = "Smile!";

	printf("%s\n", s3);
	printf("%s\n", s2);
	printf("%s\n", s1);

	return 0;
}
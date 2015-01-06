#include <stdio.h>

int main(int argc, char const *argv[])
{
	int toes = 10;
	int toes_sum, toes_square;
	
	toes_sum = toes + toes;
	toes_square = toes*toes;

	printf("toes = %d\ntoes_sum = %d\ntoes_square = %d\n", toes, toes_sum, toes_square);

	return 0;
}
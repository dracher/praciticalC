#include <stdio.h>


void d_to_b(n)
{
	int bit, ret;

	bit = n % 2;
	ret = n / 2;
	
	if (n < 2)
	{
		printf("1");
		return;
	} else {
		d_to_b(ret);
	}
	printf("%d", bit);

}

void d_to_b2(n)
{
	int r;

	r = n % 2;
	if (n >= 2)
	{
		d_to_b2(n/2);
	}
	printf("%d", r);
}

int main(int argc, char const *argv[])
{
	d_to_b(2554);
	// d_to_b2(6);
	return 0;
}


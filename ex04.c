#include <stdio.h>

void compliment();
void last_say();


int main(int argc, char const *argv[])
{
	compliment();
	compliment();
	compliment();
	last_say();
	return 0;
}


void compliment() {
	printf("For he's a jolly good fellow!\n");
}

void last_say() {
	printf("Which noboy can deny!\n");
}
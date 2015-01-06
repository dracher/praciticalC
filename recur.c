#include <stdio.h>


void up_and_down(int);

int main(void)
{
    up_and_down(1);
    
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4)
        up_and_down(n+1);

    printf("Level %d: n location %p\n", n, &n);
}

/* output should be
Level 1: n location 0x7fff612e792c
Level 2: n location 0x7fff612e790c
Level 3: n location 0x7fff612e78ec
Level 4: n location 0x7fff612e78cc
Level 4: n location 0x7fff612e78cc
Level 3: n location 0x7fff612e78ec
Level 2: n location 0x7fff612e790c
Level 1: n location 0x7fff612e792c

*/
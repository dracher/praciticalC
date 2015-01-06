#include <stdio.h>

int main(int argc, char const *argv[])
{
    int user_input;

    printf("Please input a intger: ___\b\b\b");
    scanf("%d", &user_input);

    
    for (int i = user_input; i < user_input+11; ++i)
    {
        printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>

#define HMS 60

int main(int argc, char const *argv[])
{
    int user_input = 0;
    int hour, minutes;

    while(1)
    {
        printf("Pleae input time in minutes: ");
        scanf("%d", &user_input);
        printf("Your input is %d minutes\n", user_input);
        if(user_input <= 0)
        {
            break;
        }
        hour = user_input / HMS;
        minutes = user_input % HMS;

        printf("Your input is %02d:%02d\n", hour, minutes);
    }
    
    return 0;
}
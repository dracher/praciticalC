#include <stdio.h>
#include <stdlib.h>

// Given a time, calculate the angle between the hour and minute hands.

// minute must between 0 ~ 60
// hour either 1 ~ 12 or 0 ~ 23 

// each minute represent 360 / 60 = 6
#define MINUTE_D  6;

// each hour represent 360 / 12 = 30
#define HOUR_D 30;


#define HOUR_INPUT 23
#define MINUTE_INPUT 55


int calculate_degree_of_minute(int);
float calculate_degree_of_hour(int hour, int minute);
void print_result(float);

int main(int argc, char const *argv[])
{
    float h_d, m_d, result;

    h_d = calculate_degree_of_hour(HOUR_INPUT, MINUTE_INPUT);
   
    m_d = calculate_degree_of_minute(MINUTE_INPUT);

    result = h_d - m_d;

    print_result(result);

    // print_result(((30 * HOUR_INPUT - 5.5 * MINUTE_INPUT)));

    return 0;
}

int calculate_degree_of_minute(int min) {
    return min * MINUTE_D;
}


float calculate_degree_of_hour(int hour, int min) {
    float x, y, z;

    if (hour > 12) {
        hour = hour -12;
    }

    x = hour * HOUR_D;
    y = float(min) / 60 * HOUR_D;

    if((x+y) > 360) {
        return x+y-360;
    } else{
        return x+y;
    }
}

void print_result(float result) {

    if (result > 180) {
        printf("%f\n", result - 180.0);
    } else if (result < 0) {
        printf("%f\n", result * -1);
    } else {
        printf("%f\n", result);
    }
}
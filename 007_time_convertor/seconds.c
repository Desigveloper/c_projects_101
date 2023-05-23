/**
 * Program: seconds.c
 * Descriptions: Take an input as number of seconds and convert to days, hours,
 *  minutes and seconds
 * Author: Habib(Desigveloper)
 * Date: 22/05/2023: 17:12 GMT
*/

#include <stdio.h>

#define SECONDS_PER_MIN 60
#define SECONDS_PER_HOUR (SECONDS_PER_MIN * 60)
#define SECONDS_PER_DAY (SECONDS_PER_HOUR * 24)

typedef unsigned int integer;

void convert_time(integer);

int main(void)
{
    integer iSeconds = 0;
    printf("Enter number of seconds ie. <1000000>: ");
    scanf("%d", &iSeconds);
    
    convert_time(iSeconds);

    return 0;
}

void convert_time(integer seconds) {
    integer iDays, iHours, iMinutes, iHoursLeft, iMinutesLeft, iSecondsLeft;
    
    iDays = seconds / SECONDS_PER_DAY;
    iHours = seconds / SECONDS_PER_HOUR;
    iMinutes = seconds / SECONDS_PER_MIN;
    iHoursLeft = iDays % SECONDS_PER_HOUR;
    iMinutesLeft = iMinutes % SECONDS_PER_MIN;
    iSecondsLeft = seconds % SECONDS_PER_MIN;

    printf("%u is equivalent to %u d, %u h, %u m, %u s\n", seconds, iDays, iHoursLeft, iMinutesLeft, iSecondsLeft);
}
/**
 * Program: seconds.c
 * Descriptions: Take an input as number of seconds and convert to days, hours,
 *  minutes and seconds
 * Author: Habib(Desigveloper)
 * Date: 22/05/2023: 17:12 GMT
*/

#include <stdio.h>

#define SECONDS_PER_MIN 60
#define MINS_PER_HOUR 60
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR (SECONDS_PER_MIN * MINS_PER_HOUR)
#define SECONDS_PER_DAY (SECONDS_PER_HOUR * HOURS_PER_DAY)


typedef unsigned int integer;

void convert_time(integer);

int main(void)
{
    integer iSeconds = 0;
    printf("Enter number of seconds ie. <1 to 210, 000>: ");
    scanf("%d", &iSeconds);
    
    convert_time(iSeconds);

    return 0;
}

void convert_time(integer seconds) {
    integer iDays, iHours, iMinutes, iHoursLeft, iMinutesLeft, iSecondsLeft;
    
    iDays = seconds / SECONDS_PER_DAY;
    iHours = seconds / SECONDS_PER_HOUR;
    iMinutes = seconds / SECONDS_PER_MIN;
    iHoursLeft = (iHours % SECONDS_PER_MIN) - (iDays * HOURS_PER_DAY);
    iMinutesLeft = iMinutes % SECONDS_PER_MIN;
    iSecondsLeft = seconds % SECONDS_PER_MIN;

    printf("%u is equivalent to %u d, %u h, %u m, %u s\n", seconds, iDays, iHoursLeft, iMinutesLeft, iSecondsLeft);
}
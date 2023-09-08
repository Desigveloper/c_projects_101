#include "header_files.h"
#include "definitions.h"

int main(void)
{
    s_test1.name = "Johnson";
    s_test1.age = 22;

    int hours = rand() % 24;
    int minutes =  rand() % 59;
    int seconds = rand() % 59;
    struct cotime inst_cotime = {hours, minutes, seconds};

    //record.y = "Bernard";

    address brads_address = { "Bradley Jones",
                    "RTSoftware",
                    "P.O. Box 1213",
                    "Carmel",
                    "IN",
                    "46082-1213"
                };

    printf("%s\n", record.y);

    printf("Name: %s\nAge: %d\n", s_test1.name, s_test1.age);
    printf("Time: %d:%d:%d\n", inst_time.hours, inst_time.minutes, inst_time.seconds);
    printf("CoTime1: %d:%d:%d\n", inst_cotime.cotime1.hours, \
    inst_cotime.cotime1.minutes, inst_cotime.cotime1.seconds);
    printf("%lu\n", sizeof(s_test1));

    printf("\n\nBRADLEY'S ADDRESS: \n");
    printf("\t%s\n", brads_address.name);
    printf("\t%s\n", brads_address.add1);
    printf("\t%s\n", brads_address.add2);
    printf("\t%s, %s, %s\n", brads_address.city, brads_address.state, brads_address.zip);
    return 0;
}


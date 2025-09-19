#include <stdio.h>
#include "conversion.h"

float convert_time(int unit1, int unit2, float value)
{
    const int conversion_factors[] = {1, 60, 3600, 86400}; //second, minute, hour, day
    return value * conversion_factors[unit1] / conversion_factors[unit2];
}

double convert_time_si(int unit1, int unit2, double value)
{
    const double conversion_factors[] = {
        1e-24,  // yoctosecond
        1e-21,  // zeptosecond
        1e-18,  // attosecond
        1e-15,  // femtosecond
        1e-12,  // picosecond
        1e-9,   // nanosecond
        1e-6,   // microsecond
        1e-3,   // millisecond
        1.0,    // second
        1e3,    // kilosecond
        1e6,    // megasecond
        1e9,    // gigasecond
        1e12,   // terasecond
        1e15,   // petasecond
        1e18,   // exasecond
        1e21,   // zettasecond
        1e24    // yottasecond
    }; 
    return value * conversion_factors[unit1] / conversion_factors[unit2];
}
#include <stdio.h>
#include "conversion.h"

double convert_time(int unit1, int unit2, double value)
{
    int conversion_factors[] = {1, 60, 3600, 86400}; //second, minute, hour, day
    double seconds = value * conversion_factors[unit1];
    double result = seconds / conversion_factors[unit2];
    return result;
}

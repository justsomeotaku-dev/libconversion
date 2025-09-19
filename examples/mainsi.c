#include <stdio.h>
#include <conversion.h>

int main() {
    char* unit_names[] = {
        "yoctoseconds", "zeptoseconds", "attoseconds", "femtoseconds",
        "picoseconds", "nanoseconds", "microseconds", "milliseconds",
        "seconds", "kiloseconds", "megaseconds", "gigaseconds",
        "teraseconds", "petaseconds", "exaseconds", "zettaseconds", "yottaseconds"
    };
    
    int from_unit, to_unit;
    double value;

    printf("SI Time Unit Converter\n");
    printf("0 = yoctoseconds\n1 = zeptoseconds\n2 = attoseconds\n3 = femtoseconds\n");
    printf("4 = picoseconds\n5 = nanoseconds\n6 = microseconds\n7 = milliseconds\n");
    printf("8 = seconds\n9 = kiloseconds\n10 = megaseconds\n11 = gigaseconds\n");
    printf("12 = teraseconds\n13 = petaseconds\n14 = exaseconds\n15 = zettaseconds\n");
    printf("16 = yottaseconds\n\n");

    printf("Convert FROM which unit? (0-16): ");
    scanf("%d", &from_unit); 

    printf("Enter the value: ");
    scanf("%lf", &value);

    printf("Convert TO which unit? (0-16): ");
    scanf("%d", &to_unit);

    double result = convert_time_si(from_unit, to_unit, value);

    printf("\n%.6g %s = %.6g %s\n",
           value, unit_names[from_unit],
           result, unit_names[to_unit]);

    return 0;
}
#include <stdio.h>
#include <conversion.h>

int main() {
    char* unit_names[] = {"seconds", "minutes", "hours", "days"};
    int from_unit, to_unit;
    double value;

    printf("Time Converter\n");
    printf("0 = seconds\n1 = minutes\n2 = hours\n3 = days\n\n");

    printf("Convert FROM which unit? (0-3): ");
    scanf("%d", &from_unit);

    printf("Enter the value: ");
    scanf("%lf", &value);

    printf("Convert TO which unit? (0-3)");
    scanf("%d", &to_unit);

    double result = convert_time(from_unit, to_unit, value);

    printf("\n%.2f %s = %.2f %s",
    value, unit_names[from_unit],
    result, unit_names[to_unit]);

    return 0;
}
# libconversion
A lightweight C library providing functions for converting between common units of measurement. It is designed to make unit conversions easy, fast, and reliable.
# Build the Library
Clone the repository and build using make:
# Manual install
```bash
git clone https://github.com/justsomeotaku-dev/libconversion/
cd libconversion
make static   # build static library
make shared   # build shared library
make example  # build demo program
```
# Automatic install
```bash
git clone https://github.com/justsomeotaku-dev/libconversion/
cd libconversion
make          # build library + demo
```
# Example usage
```C
#include "conversion.h"

int main() {
    char* unit_names[] = {"seconds", "minutes", "hours", "days"};
    int from_unit = 0;  // 0 = seconds
    int to_unit = 1;    // 1 = minutes
    float value = 100; // 100 seconds

    float result = convert_time(from_unit, to_unit, value);

    printf("\n%.2g %s = %.2g %s",
    value, unit_names[from_unit],
    result, unit_names[to_unit]);

    return 0;
}
```
```C
0 yoctosecond    1 zeptosecond   2 attosecond     3 femtosecond
4 picosecond     5 nanosecond    6 microsecond    7 millisecond
8 second         9 kilosecond    10 megasecond    11 gigasecond
12 terasecond    13 petasecond   14 exasecond     15 zettasecond
16 yottasecond
```

# Feedback
I am open to any feedback, issue or improvement. 

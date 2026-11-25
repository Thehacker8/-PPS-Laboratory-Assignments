#include <stdio.h>
#include <time.h>

int isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

/* Weekday of 1 Jan of year y using time.h: 0 = Sunday ... 6 = Saturday */
int firstDayOfYear(int y) {
    struct tm t = {0};
    t.tm_year = y - 1900;
    t.tm_mon  = 0;
    t.tm_mday = 1;
    t.tm_hour = 12;          /* avoid daylight-saving edge cases */
    mktime(&t);              /* fills in tm_wday */
    return t.tm_wday;
}

int main() {
    const char *names[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, m, d, start;

    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1970) {
        printf("Invalid year (enter 1970 or later).\n");
        return 1;
    }

    if (isLeap(year))
        days[1] = 29;

    start = firstDayOfYear(year);

    for (m = 0; m < 12; m++) {
        printf("\n   %s %d\n", names[m], year);
        printf("Su Mo Tu We Th Fr Sa\n");

        for (d = 0; d < start; d++)
            printf("   ");

        for (d = 1; d <= days[m]; d++) {
            printf("%2d ", d);
            if ((d + start) % 7 == 0)
                printf("\n");
        }
        printf("\n");

        start = (start + days[m]) % 7;
    }
    return 0;
}

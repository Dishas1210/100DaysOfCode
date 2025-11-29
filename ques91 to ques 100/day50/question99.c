#include <stdio.h>

int main() {
    char date[11];
    int dd, mm, yyyy;
    char *mon[] = {"Jan","Feb","Mar","Apr","May","Jun",
                   "Jul","Aug","Sep","Oct","Nov","Dec"};

    // input like: 15/04/2025
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // print: dd-MMM-yyyy
    printf("%02d-%s-%d\n", dd, mon[mm - 1], yyyy);

    return 0;
}

/*
Q150: Use pointer to struct to modify and display data using -> operator.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *p;

    p = &s;                       // p points to s

    scanf("%s", p->name);
    scanf("%d", &p->roll);
    scanf("%d", &p->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           p->name, p->roll, p->marks);

    return 0;
}

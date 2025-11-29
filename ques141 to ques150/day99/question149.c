#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    scanf("%s", s->name);
    scanf("%d", &s->roll);
    scanf("%d", &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    free(s);
    return 0;
}

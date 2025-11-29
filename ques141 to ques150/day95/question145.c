/*
Q145: Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int i, max_index = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }
    return s[max_index];
}

int main() {
    int n, i;
    scanf("%d", &n);              // number of students

    struct Student st[n];

    for(i = 0; i < n; i++) {
        scanf("%s", st[i].name);
        scanf("%d", &st[i].roll);
        scanf("%d", &st[i].marks);
    }

    struct Student top = getTopper(st, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}

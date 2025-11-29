/*
Q143: Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i, max_index = 0;
    scanf("%d", &n);            // number of students

    struct Student s[n];

    for(i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);

        if(s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           s[max_index].name, s[max_index].marks);

    return 0;
}

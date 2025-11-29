/*
Q147: Store employee data in a binary file using fwrite() and read using fread().
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    /* read from user */
    scanf("%s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    /* write to binary file */
    fp = fopen("emp.dat", "wb");
    if (fp == NULL) return 1;
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    /* read back from binary file */
    fp = fopen("emp.dat", "rb");
    if (fp == NULL) return 1;
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}

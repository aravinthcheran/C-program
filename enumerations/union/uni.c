#include<stdio.h>

struct stud {
    char name[50];
    char roll[50];
    int marks[6];
    float avg;
};

union student {
    char name[50];
    char roll[50];
    int marks[6];
    float avg;
};

int main() {
    struct stud s1[] = {
        {"Rahul", "19BCE0897", {10, 10, 10, 10, 10, 10}, 10.0},
        {"rohit", "22z250", {10, 10, 10, 10, 10, 15}, 11.0}
    };

    union student s[] = {
        {.name = "Rahul", .roll = "19BCE0897", .marks = {10, 10, 10, 10, 10, 10}, .avg = 10.0},
        {.name = "rohit", .roll = "22z250", .marks = {10, 10, 10, 10, 10, 15}, .avg = 11.0}
    };

    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %s\n", s[i].roll);
        printf("Marks: ");
        for (int j = 0; j < 6; j++) {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");
        printf("Average: %f\n", s[i].avg);
    }

    printf("%lu", sizeof(struct stud));
    printf("\n%lu", sizeof(union student));

    return 0;
}

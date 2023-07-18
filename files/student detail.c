#include<stdio.h>

struct student {
    char name[50];
    char roll[50];
    int marks[6];
    float avg;
};

int main() {
    int n = 2;
    struct student s[] = {
        {"prat", "246", {90, 80, 70, 60, 50, 40}},
        {"jeev", "247", {80, 70, 60, 50, 40, 30}}
    };

    FILE *fp;
    fp = fopen("students.txt", "w");

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %s\n", s[i].name, s[i].roll);
        for (int j = 0; j < 6; j++) {
            fprintf(fp, "%d ", s[i].marks[j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }
    float sum[6],avg[6][2];
    int a;
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %s\n", s[i].name, s[i].roll);
        for (int j = 0; j < 6; j++) {
            fscanf(fp, "%d ",&a);
            avg[j][i]=a;
        }
        fscanf(fp, "\n");
    }

    fclose(fp);
    for(int j=0;j<6;j++)
    {
        for(int i=0;i<2;i++)
        {
            sum[j]+=avg[j][i];
        }
        sum[j]/=2;
    }

    printf("Average marks of students in each subject:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %.2f\n", i + 1, sum[i]);
    }

    return 0;
}

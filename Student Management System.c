#include <stdio.h>

struct Student {
    char name[20];
    int scores[5]; // assuming 5 subjects
    float average;
};

float calculateAverage(int scores[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    return (float)sum / 5;
}

void findHighestAndLowest(int scores[5], int *highest, int *lowest) {
    *highest = scores[0];
    *lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > *highest) {
            *highest = scores[i];
        }
        if (scores[i] < *lowest) {
            *lowest = scores[i];
        }
    }
}

void displaySummary(struct Student student) {
    printf("Student Name: %s\n", student.name);
    printf("Average Score: %.2f\n", student.average);
    int highest, lowest;
    findHighestAndLowest(student.scores, &highest, &lowest);
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
}

int main() {
    struct Student student;
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter scores for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.scores[i]);
    }
    student.average = calculateAverage(student.scores);
    displaySummary(student);
    return 0;
}


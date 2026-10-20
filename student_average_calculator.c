#include <stdio.h>

// Function to calculate sum of marks
float calculateTotal(float marks[], int numSubjects) {
    float total = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average mark
float calculateAverage(float total, int numSubjects) {
    return total / numSubjects;
}

// Function to determine grade based on average
char getGrade(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 75) return 'B';
    if (avg >= 60) return 'C';
    if (avg >= 50) return 'D';
    return 'F';
}

int main() {
    int numStudents, numSubjects;

    printf("==========================================\n");
    printf("      STUDENT AVERAGE CALCULATOR          \n");
    printf("==========================================\n");

    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);

    for (int s = 1; s <= numStudents; s++) {
        printf("\n------------------------------------------\n");
        printf("Enter marks for Student %d:\n", s);
        
        float marks[numSubjects];
        for (int i = 0; i < numSubjects; i++) {
            printf("  Subject %d mark: ", i + 1);
            scanf("%f", &marks[i]);
        }

        float total = calculateTotal(marks, numSubjects);
        float avg = calculateAverage(total, numSubjects);
        char grade = getGrade(avg);

        printf("\n--- Performance Result (Student %d) ---\n", s);
        printf("Total Marks: %.2f\n", total);
        printf("Average Marks: %.2f\n", avg);
        printf("Grade: %c\n", grade);
    }

    printf("==========================================\n");
    return 0;
}

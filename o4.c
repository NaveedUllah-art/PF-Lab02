#include <stdio.h>

int main() {
    int students, marks;
    int passed = 0, failed = 0, comparison = 0, total = 0;
    float average;
    int i;

    printf("Number of students: ");
    scanf("%d", &students);

    for ( i = 1; i <= students; i++) {
        printf("Marks of student %d: ", i);
        scanf("%d", &marks);

        total = total + marks;

        if (marks >= 50) {
            passed++;
        } else {
            failed++;
        }

        if (marks >comparison ) {
            comparison = marks;
        }
        else if(marks<comparison){
        	marks=marks;
		}
    }

    average = total / students;

    printf("\nPassed: %d\n", passed);
    printf("Failed: %d\n", failed);
    printf("Highest: %d\n", comparison);
    printf("Average: %.2f\n", average);

    return 0;
}
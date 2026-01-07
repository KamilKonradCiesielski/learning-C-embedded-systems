#include <stdio.h>

int main() {
    int score;
    // Standard input for numerical score
    scanf("%d", &score);
    
    // 1. Input validation (must be between 0 and 100)
    if (score < 0 || score > 100) {
        printf("Invalid score");
        return 0; // Terminate program if input is out of range
    }
    // 2. Prepare variable for switch logic (using integer division to get tens digit)
    int grade_category = score / 10;
    
    // 3. Display letter grade using a switch-case statement
    switch (grade_category) {
        case 10: // Handle perfect score (100)
        case 9:  // Handle scores 90-99
            printf("A");
            break;
        case 8:  // Handle scores 80-89
            printf("B");
            break;
        case 7:  // Handle scores 70-79
            printf("C");
            break;
        case 6:  // Handle scores 60-69
            printf("D");
            break;
        default: // Handle all scores from 0-59 (Failing grade)
            printf("F");
            break;
    }

    // 4. Use the ternary conditional operator to determine pass/fail status
    // Using %s because "Status: Passed/Failed" are string literals (char*)
    char* result = (score >= 60) ? "Status: Passed" : "Status: Failed";
    printf("\n%s", result);

    return 0;
}

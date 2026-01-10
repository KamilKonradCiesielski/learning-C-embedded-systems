#include <stdio.h>

int main() {

    float weight, height, bmi;

    int weight_result, height_result;

    weight_result = scanf("%f", &weight);

    height_result = scanf("%f", &height);


    // Validate input

    if (weight_result == 0){

        printf("Invalid input, please write number!");

        return 0;

    } else if (weight < 30 || weight > 300) {

        printf("Weight out of range!");

        return 0;

    }



    if (height_result == 0){

        printf("Invalid input, please write number!");

        return 0;

    } else if (height < 1.0 || height > 2.5){

        printf("Height out of range!");

        return 0;

    }

    // Calculate BMI

    bmi = weight / (height * height);



    // Determine weight category

    if (bmi >= 30.0){

        printf("BMI: %.1f\n", bmi);

        printf("Category: Obese\n");

    } else if (bmi <= 30 && bmi >= 25.0){

        printf("BMI: %.1f\n", bmi);

        printf("Category: Overweight\n");

    } else if (bmi <= 24.9 && bmi >= 18.5){

        printf("BMI: %.1f\n", bmi);

        printf("Category: Normal weight\n");

    } else {

        printf("BMI: %.1f\n", bmi);

        printf("Category: Underweight\n");

    }

   

    return 0;

}

#include <stdio.h>
#define MAX_SCORE 100

int main() {
    int age = 25;
    float price = 19.99;
    char grade = 'A';
    float discounted_price;
    int rounded_price;

    // Obliczamy cenę po 15% zniżce
    discounted_price = price * 0.85; 
    
    // Rzutowanie na int (odcina część po przecinku)
    rounded_price = (int)discounted_price;

    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);
    
    return 0;
}

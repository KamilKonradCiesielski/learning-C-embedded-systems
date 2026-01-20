#include <stdio.h>

// function declaration
int isPrime(int number);
int sumOfPrimes(int start, int end);

int main() {
    int start, end;

    // loading data
    if (scanf("%d %d", &start, &end) != 2) return 1;

    // data walidation
    if (start <= 0 || end <= 0 || start >= end) {
        printf("Invalid input\n");
        return 0;
    }

    // Wywołanie funkcji i wypisanie wyniku
    int result = sumOfPrimes(start, end);
    printf("%d\n", result);

    return 0;
}

// function checking if a numer is prime or not
int isPrime(int number) {
    if (number < 2) return 0; // 0 and 1 are definitely not a prime number

    // using loop to check dividing the number from input/User and dividing it by a int number from 2 up to the number from User
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0; // divider found! So the number is not prime 
        }
    }
    // after checking all numbers we can be sure that the numer is not prime 
    return 1;
}

// function that sums the number in range that was set by the User
int sumOfPrimes(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        // if the isPrime(i) gives as 1 we can add this value to the sum
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

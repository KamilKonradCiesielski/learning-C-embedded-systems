#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("How many whole numbers will be entered? ");
    scanf("%d", &n);
    
    while (n != 0) {
        printf("The next number will be: ");
        scanf("%d", &num);
        sum = sum + num; 
        n--;
    }

    // TUTAJ DODAJEMY WYNIK:
    printf("The total is %d\n", sum);
    
    return 0;
}

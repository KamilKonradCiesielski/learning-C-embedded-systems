/*
 * Projekt: Podstawy Rzutowania (Type Casting)
 * Cel: Demonstacja rzutowania jawnego (explicit casting) z double do int.
 * Autor: Kamil Ciesielski
 */

#include <stdio.h>

int main() {
    double temperature = 98.6;
    int whole_part;

    // Poprawna kolejność: do 'whole_part' przypisujemy wartość 'temperature'
    // (int) powoduje odcięcie części ułamkowej
    whole_part = (int)temperature;

    // %.1f wypisze tylko jedno miejsce po przecinku
    // \n przeniesie tekst "Whole part" do nowej linii
    printf("Original temperature: %.1f\n", temperature);
    printf("Whole part: %d\n", whole_part);

    return 0;
}

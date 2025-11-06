/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description:A C program that runs the retail shop on its daily activities
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");

    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        return 1;  // Exit program if file not found
    }

    // Read each transaction (amount) from the file
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display the total sales of the day
    printf("Total sales of the day: %.2f\n", total);

    // Close the file properly
    fclose(file);

    return 0;
}
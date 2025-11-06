/*
Name:LAURENCE ODUORI OCHIENG 
Reg No:CT101/G/26674/25
Description:A C program that stores students name, registration number,and total marks
*/


#include<stdio.h>
#include <stdlib.h>

// (i) Define a structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    // (ii) Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open file results.dat\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("-----------------------------\n");

    // (iii) Read and display all records
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", s.name);
        printf("Marks: %d\n", s.totalMarks);
        printf("-----------------------------\n");
    }

    fclose(file);
    return 0;
}

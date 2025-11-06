/*
Name:oliver ouma
Reg No:CT101/G/29075/25
Description:A c program to allow borrowing of books in a library
*/

#include<stdio.h> 
int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode so it doesn't erase existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);  // Get book title (including spaces)

    // Write the title to the file
    fprintf(file, "%s", title);

    fclose(file);  // Close the file

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
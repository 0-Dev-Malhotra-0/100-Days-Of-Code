/*
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.
*/

#include <stdio.h>
int main(){
    FILE *file;
    char input[256];

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get user input
    printf("Enter text to append: ");
    fgets(input, sizeof(input), stdin);

    // Append the input to the file
    fputs(input, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}

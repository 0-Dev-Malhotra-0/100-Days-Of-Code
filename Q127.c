//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file for reading
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt for reading.\n");
        return 1;
    }

    // Open output file for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot open output.txt for writing.\n");
        fclose(inFile);
        return 1;
    }

    // Read characters one by one, convert to uppercase, and write
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    // Close both files
    fclose(inFile);
    fclose(outFile);

    printf("Text successfully converted to uppercase and saved in output.txt\n");
    return 0;
}

//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file for reading
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Read each character from file
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // convert to lowercase for easy checking

        if (isalpha(ch)) {  // check if character is a letter

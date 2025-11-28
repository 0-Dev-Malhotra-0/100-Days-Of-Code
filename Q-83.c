/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Count_Vowels_Consonants(char str[])
{
    int vowels = 0, consonants = 0, i;
    char ch;
    
    for(i = 0; i < strlen(str); i++)
    {
        ch = tolower(str[i]);  // Convert to lowercase for easier checking
        
        // Check if character is an alphabet
        if((ch >= 'a' && ch <= 'z'))
        {
            // Check if it's a vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
}

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    Count_Vowels_Consonants(str);
    
    return 0;
}


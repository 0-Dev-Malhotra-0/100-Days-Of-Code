/*
Use pointer to struct to modify and display data using -> operator.
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow (->) operator.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *studentPtr;
    studentPtr = (struct Student *)malloc(sizeof(struct Student));

    // Input data
    strcpy(studentPtr->name, "John");
    studentPtr->roll = 106;
    studentPtr->marks = 91;

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           studentPtr->name, studentPtr->roll, studentPtr->marks);

    // Free allocated memory
    free(studentPtr);
    
    return 0;
}

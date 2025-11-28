/*
Use malloc() to allocate structure memory dynamically and print details.
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
Explanation 1:
Memory for structure is dynamically allocated on heap using malloc().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    // Dynamically allocate memory for a Student structure
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the structure members
    strcpy(student->name, "Tina");
    student->roll = 105;
    student->marks = 88;

    // Print the details of the student
    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->roll, student->marks);

    // Free the allocated memory
    free(student);
    
    return 0;
}/*
Use malloc() to allocate structure memory dynamically and print details.
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
Explanation 1:
Memory for structure is dynamically allocated on heap using malloc().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    // Dynamically allocate memory for a Student structure
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the structure members
    strcpy(student->name, "Tina");
    student->roll = 105;
    student->marks = 88;

    // Print the details of the student
    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->roll, student->marks);

    // Free the allocated memory
    free(student);
    
    return 0;
}

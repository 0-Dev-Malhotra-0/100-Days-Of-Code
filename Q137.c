/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Input 1:
GUEST
Output 1:
Welcome Guest!
Explanation 1:
Enum value determines which message is displayed.
*/
#include <stdio.h>
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;
void displayMessage(UserRole role) {
    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown Role!\n");
    }
}
int main() {
    UserRole role = GUEST; // Change this value to ADMIN or USER to test other roles
    displayMessage(role);
    return 0;
}

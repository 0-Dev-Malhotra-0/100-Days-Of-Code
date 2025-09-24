/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include<stdio.h>

int main()
{
    double a, b, c;
    double d, root1, root2;
    double rP,iP;

    printf("Enter coefficients a, b, and c of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    
    if (d > 0) {
        root1 = (-b + d*d) / (2 * a);
        root2 = (-b - d*d) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
	 else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
	else {
        rP = -b / (2 * a);
        iP = d*d / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", rP, iP);
        printf("Root 2 = %.2lf - %.2lfi\n", rP, iP);
    }
    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, h;
    
    // Display the function formula
    printf("=============================================\n");
    printf("Function: y = 1/(x - 2)\n");
    printf("=============================================\n\n");

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter h: ");
    scanf("%f", &h);
    
    // Function y = 1/(x-2) with discontinuity at x=2
    printf("\nTable of function values y = 1/(x-2)\n");
    printf("------------------------------------\n");
    printf("%3s%5s%5s%8s%7s\n", "No", "|", "x", "|", "y");
    printf("------------------------------------\n");
    
    double x = a;
    int counter = 1;
    
    while (x <= b) {
        printf("%3d%5s%6.1f%7s", counter, "|", x, "|");
        
        // Check for discontinuity at x=2
        if (fabs(x - 2.0) < 1e-3) {
            printf("%8s\n", "****");
        } else {
            double y = 1.0 / (x - 2.0);
            printf("%8.2f\n", y);
        }
        
        x += h;
        counter++;
    }
    
    return 0;
}
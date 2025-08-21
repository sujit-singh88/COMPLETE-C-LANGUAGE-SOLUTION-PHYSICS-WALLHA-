#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double m1, m2;

    // Input 3 points
    printf("Enter coordinates of point A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of point B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter coordinates of point C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Check for vertical lines to avoid divide-by-zero
    if ((x2 - x1) == 0 || (x3 - x2) == 0) {
        if ((x2 - x1) == 0 && (x3 - x2) == 0) {
            printf("All three points lie on a vertical line.\n");
        } else {
            printf("The points do NOT lie on the same straight line.\n");
        }
    } else {
        // Calculate slopes
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y3 - y2) / (x3 - x2);

        // Compare slopes
        if (m1 == m2) {
            printf("All three points lie on the same straight line.\n");
        } else {
            printf("The points do NOT lie on the same straight line.\n");
        }
    }

    return 0;
}

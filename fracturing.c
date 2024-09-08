// Timothy Biscay
// 5121552
// COP3223
// Fall 2024
#include <stdio.h>
#include <math.h>

double calculateDistance();
{
    double x1, y1, x2, y2, distance;

    // Asks the user for two sets of points
    printf("Input x1: ");
    scanf("%lf", &x1)''
    printf("Input y1: ");
    scanf("%lf", &y1);

    printf("Input x2: ");
    scanf("%lf", &x2)''
    printf("Input y2: ");
    scanf("%lf", &y2);

    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    // Returns the distance between two points
    return sqrt(distance);
}

double calculatePerimeter();
{}

double calculateArea();
{}

double calculateWidth();
{}

double calculateHeight();
{}


int main (int argc, char **argv)
{
    calculateDistance ();
    calculatePerimeter ();
    calculateArea ();
    calculateWidth ();
    calculateHeight ();

    return 0;
}
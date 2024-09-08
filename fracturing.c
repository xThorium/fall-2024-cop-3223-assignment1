// Timothy Biscay
// 5121552
// COP3223
// Fall 2024
#include <stdio.h>
#include <math.h>

double calculateDistance() {
    
    double x1, y1, x2, y2, distance;

    // Asks the user for two sets of points
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);

    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);

    // Calculates the distance using a formula, which then prints it for the user to read
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("The distance between the two points is: %.4lf", sqrt(distance));

    return 0;
    }

double calculatePerimeter() {

    // Reuses the distance from calculateDistance
    double distance = calculateDistance();

    // Calulcates the permiter, in this case we're assuming it's a perfectly square city
    double perimeter = distance * 4;
    printf("The perimeter of the city encompassed by your request is: %.4lf", perimeter);

    // Returns what the difficulty of this functio was to make between 1 - 5
    return 2;
    }

//double calculateArea();
//{}

//double calculateWidth();
//{}

//double calculateHeight();
//{}


int main (int argc, char **argv)
{
    double calculateDistance ();
    double calculatePerimeter ();
    //calculateArea ();
    //calculateWidth ();
    //calculateHeight ();

    return 0;
}
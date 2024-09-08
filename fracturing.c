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
    printf("The distance between the two points is: %.4lf\n", sqrt(distance));

    return distance;
    }

double calculatePerimeter() {

    // Reuses the distance from calculateDistance
    double distance = calculateDistance();

    // Calulcates the permiter, in this case we're assuming it's a perfectly square city
    double perimeter = distance * 4;
    printf("The perimeter of the city encompassed by your request is: %.4lf\n", perimeter);

    // Returns what the difficulty of this functio was to make between 1 - 5
    return 2.0;
    }

double calculateArea() {

    // Reuses the calculateDistance function to avoid needed to redo the code
    double distance = calculateDistance();

    // Calculates area based on given inputs
    double area = distance * distance;

    // Outputs the area
    printf("The area of the city encompassed by your request is: %.4lf\n", area);

    // Return a difficulty rating
    return 1.0;
    }

double calculateWidth() {

    // Asks the user for new point inputs, not reusing that from previous functions
    double distance = calculateDistance();

    // Calculate Width based on the given x coordinates
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is: %.4lf\n", width);

    // Returns a difficulty rating of the calculateWidth function
    return 3.0
    }


double calculateHeight() {

    double distance = calculateDistance();

    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is: %.4lf\n", height);
    }



int main (int argc, char **argv)
{
    double distance = calculateDistance ();
    double perimeter = calculatePerimeter ();
    double area = calculateArea();
    double width = calculateWidth ();
    double height = calculateHeight ();

    return 0;
}
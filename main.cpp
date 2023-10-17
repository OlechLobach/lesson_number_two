#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
        double circumference;
        std::cout << "Enter the circumference of the circle: ";
        std::cin >> circumference;

        double radius = circumference / (2.0 * M_PI);  
        double area = M_PI * pow(radius, 2);  

        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << area << std::endl;


    return 0;
}
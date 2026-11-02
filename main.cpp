#include <iostream>
#include <cmath>

using namespace std;

double squareArea(double side){
    return side*side;
}

double squarePerimeter(double side){
    return 4 * side;
}

double trianglePerimiter(double a, double b, double c){
    return a+b+c;
}

double triangleArea(double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

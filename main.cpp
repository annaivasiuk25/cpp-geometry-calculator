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
double circleArea(double r) {
    return 3.14 * r * r;
}

double circlePerimeter(double r) {
    return 2 * 3.14 * r;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int choice;
    cout << "Оберіть фігуру (1 - Квадрат, 2 - Трикутник, 3 - Коло): ";
    cin >> choice;

    if (choice == 1) {
        double a;
        cout << "Введіть сторону квадрата: ";
        cin >> a;
        cout << "Площа: " << squareArea(a) << endl;
        cout << "Периметр: " << squarePerimeter(a) << endl;
    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введіть 3 сторони трикутника: ";
        cin >> a >> b >> c;
        cout << "Площа: " << triangleArea(a, b, c) << endl;
        cout << "Периметр: " << trianglePerimeter(a, b, c) << endl;
    }
    else if (choice == 3) {
        double r;
        cout << "Введіть радіус кола: ";
        cin >> r;
        cout << "Площа кола: " << circleArea(r) << endl;
        cout << "Довжина кола: " << circlePerimeter(r) << endl;
    }
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}
double circleArea(double r) {
    return 3.14 * r * r;
}

double circlePerimeter(double r) {
    return 2 * 3.14 * r;
}

int main() {
    
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    cout << "Оберіть фігуру (1 - Квадрат, 2 - Трикутник, 3 - Коло): ";
    cin >> choice;

    if (choice == 1) {
        double a;
        cout << "Введіть сторону квадрата: ";
        cin >> a;
        cout << "Площа: " << squareArea(a) << endl;
        cout << "Периметр: " << squarePerimeter(a) << endl;
    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введіть 3 сторони трикутника: ";
        cin >> a >> b >> c;
        cout << "Площа: " << triangleArea(a, b, c) << endl;
        cout << "Периметр: " << trianglePerimeter(a, b, c) << endl;
    }
    else if (choice == 3) {
        double r;
        cout << "Введіть радіус кола: ";
        cin >> r;
        cout << "Площа кола: " << circleArea(r) << endl;
        cout << "Довжина кола: " << circlePerimeter(r) << endl;
    }
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}

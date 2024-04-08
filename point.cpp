#include <iostream>
#include <cmath> 

class Point {
private:
    double x;
    double y;

public:
    
    Point() : x(0.0), y(0.0) {}

    
    Point(double x, double y) : x(x), y(y) {}

    
    void setX(double x) { this->x = x; }

    double getX() const { return x; }

    void setY(double y) { this->y = y; }

    double getY() const { return y; }
    
    void setXY(double x, double y) { this->x = x; this->y = y; }

    
    double distance(double x, double y) const {
        return std::sqrt(std::pow(this->x - x, 2) + std::pow(this->y - y, 2));
    }

    double distance(const Point& another) const {
        return std::sqrt(std::pow(this->x - another.x, 2) + std::pow(this->y - another.y, 2));
    }
};

int main() {
    
    Point p1(8, 2.0);
    Point p2(4.0, 6.0);

    
    std::cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;
    std::cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;

    
    std::cout << "Distance between p1 and (4, 6): " << p1.distance(4.0, 6.0) << std::endl;
    std::cout << "Distance between p1 and p2: " << p1.distance(p2) << std::endl;

    return 0;
}

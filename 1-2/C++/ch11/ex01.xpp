
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;


public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }


};
class ThreeDPoint :public Point {
private:
    int z;


public:
    ThreeDPoint(int x, int y, int z) : Point(x, y), z(z) {}
    ThreeDPoint() : Point(0, 0), z(0) {}
    ~ThreeDPoint() {}

    int getZ() const { return z; }
    void setZ(int z) { this->z = z; }

    ThreeDPoint operator+(const ThreeDPoint& other) const {
        return ThreeDPoint(
            this->getX() + other.getX(),
            this->getY() + other.getY(),
            this->z + other.z
        );
    }
    void print() const {
        cout << "(" << getX() << ", " << getY() << ", " << z << ")" << endl;
    }
};

int main() {
    ThreeDPoint p1(10, 10, 10);
    ThreeDPoint p2(10, 10, 10);
    ThreeDPoint p3;
    p1.print();
    p2.print();
    p3 = p1 + p2;   
    p3.print();

    return 0;
}

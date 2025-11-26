// ch12-ex01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//일반적인 도형을 나타내는 Shape라는 클래스에 추가로 getArea()함수를 가상 함수로 정의하라. getArea()는
//도형의 면접을 구한다. Rect(사각형), circle(원), Triangle(삼각형) 클래슨
//Shape클래스를 상속받아서 작성된다. 
//Shape* 포인터 배열을 다야앟ㄴ 도형 객체로 채운다. 배열 안에 있는 도형들의 면적으 계산하는 프로그램을 작서앻보자.

#include <iostream>
#include <cstdlib>

using namespace std;

class Shape {
public:
    int x, y;
    virtual double getArea() = 0;
    virtual ~Shape() {};
};
class Circle :public Shape {
public:

    Circle() {
        x = 0;
    }
    Circle(int a) {
        x = a;
    }
    virtual double getArea() {
        return x * x * 3.141592;
    }
};
class Triangle :public Shape {
public:
    Triangle() {
        x = 0;
        y = 0;
    }
    Triangle(int a, int b) {
        x = a;
        y = b;
    }
    virtual double getArea() {
        return x * y * 0.5;
    }
};
class Rect :public Shape {
public:
    Rect() {
        x = 0;
        y = 0;
    }
    Rect(int a, int b) {
        x = a;
        y = b;
    }
    virtual double getArea() {
        return x * y;
    }
};
int main()
{
    Shape* shapes[3];
    shapes[0] = new Circle(37);
    shapes[1] = new Triangle(63,77);
    shapes[2] = new Rect(41, 89);


    cout << "도형 #0의 면적: " << shapes[0]->getArea() << endl;
    cout << "도형 #1의 면적: " << shapes[1]->getArea() << endl;
    cout << "도형 #2의 면적: " << shapes[2]->getArea() << endl;
    return 0;
}


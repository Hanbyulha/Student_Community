#include <iostream>
using namespace std;
#include "Class.h"
class figure {
    figure::~figure() {
        cout << "소멸자" << a << "클래스" << endl;
    }
    double figure::AreaOval() {
        double Oval = width1 * width2 * 3.14;
        cout << "타원의 넓이는" << Oval << "이다" << endl;
        return Oval;
    }

    int figure::AreaLadder() {
        int Ladder = (width1 + width2) * height / 2;
        cout << "사다리꼴의 넓이는" << Ladder << "이다" << endl;
        return Ladder;
    }
    int figure::AreaRect() {
        int Rect = width1 * width2;
        cout << "사각형의 넓이는" << Rect << "이다" << endl;
        return Rect;
    }

    void figure::setTwo(int a, int b) {
        width1 = a;
        width2 = b;
    }

    double figure::getA() {
        return width1;
    }

    double figure::getB() {
        return width2;
    }

    int figure::getC() {
        return height;
    }


    void figure::setThree(int a, int b, int c) {
        width1 = a;
        width2 = b;
        height = c;
    }
};

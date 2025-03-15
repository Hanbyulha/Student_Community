#include <iostream>
using namespace std;
#include "Class.h"


int main(void)
{
    //객체1 만들지 타원
    figure figure1(5.0, 1.0, "CircleA");
    figure1.AreaOval();

    //객체2 사각형
    figure figure2(10.0, 20.0, "Rectabgular");
    figure2.AreaRect();

    //객체3 사다리꼴
    figure figure3(6, 6, 4, "Ladder");
    figure3.AreaLadder();
    figure3.setThree(5, 10, 6);
    figure3.AreaLadder();
}

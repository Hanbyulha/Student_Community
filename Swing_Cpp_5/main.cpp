#include <iostream>
using namespace std;
#include "Class.h"


int main(void)
{
    //��ü1 ������ Ÿ��
    figure figure1(5.0, 1.0, "CircleA");
    figure1.AreaOval();

    //��ü2 �簢��
    figure figure2(10.0, 20.0, "Rectabgular");
    figure2.AreaRect();

    //��ü3 ��ٸ���
    figure figure3(6, 6, 4, "Ladder");
    figure3.AreaLadder();
    figure3.setThree(5, 10, 6);
    figure3.AreaLadder();
}
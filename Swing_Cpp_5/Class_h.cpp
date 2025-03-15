#ifndef Class_H
#define Class_H
class figure {
    //멤버변수
    double width1;
    double width2;
    int height;
    string a;
public:  //멤버함수
    // 길이를 반환 함수
    double getA(); // width1 
    double getB(); // width2
    int getC(); // height

    //넓이를 구하는 함수
    double AreaOval();
    int AreaLadder();
    int AreaRect();

    //멤버변수를 수정해주는 값
    void setTwo(int a, int b); //width1, width2 설정
    void setThree(int a, int b, int c); // width1, width2, height 설정

    //소멸자
    ~figure();
    //생성자
    figure(double w1, double w2, string a1) { // 타원 // 사각형
        width1 = w1;
        width2 = w2;
        a = a1;
    }
    figure(int w1, int w2, int h, string a1) { // 사다리꼴
        width1 = w1;
        width2 = w2;
        height = h;
        a = a1;
    }
};
#endif Class_H

#ifndef Class_H
#define Class_H
class figure {
    //�������
    double width1;
    double width2;
    int height;
    string a;
public:  //����Լ�
    // ���̸� ��ȯ �Լ�
    double getA(); // width1 
    double getB(); // width2
    int getC(); // height

    //���̸� ���ϴ� �Լ�
    double AreaOval();
    int AreaLadder();
    int AreaRect();

    //��������� �������ִ� ��
    void setTwo(int a, int b); //width1, width2 ����
    void setThree(int a, int b, int c); // width1, width2, height ����

    //�Ҹ���
    ~figure();
    //������
    figure(double w1, double w2, string a1) { // Ÿ�� // �簢��
        width1 = w1;
        width2 = w2;
        a = a1;
    }
    figure(int w1, int w2, int h, string a1) { // ��ٸ���
        width1 = w1;
        width2 = w2;
        height = h;
        a = a1;
    }
};
#endif Class_H
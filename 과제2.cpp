#include <iostream>
#include <string>
using namespace std;


string list[3][2] = { {"1. ","1"},{"2. ","1"} , {"3. ","1"} };
//new연산자 사용, 객체 포인터 사용
class Member {
    int start;
    string Name;
    string Id;
    string Password;
public:
    string getName();//Name값 리턴
    string getId();//Id값 리턴
    string getPassword();//Password값 리턴
    string setName(string name);//이름 입력받은
    string setId(string id);//아이디 입력받음
    string setPassword(string ps);//패스워드 입력받음
};
string Member::getName() {
    return Name;
}
string Member::getPassword() {
    return Password;
}
string Member::getId() {
    return Id;
}
string Member::setName(string name) {
    Name = name;
    return Name;

}
string Member::setId(string id) {
    Id = id;
    return Id;
}
string Member::setPassword(string ps) {
    Password = ps;
    return Password;
}
class Cart {
public:
    void bag_course();//2번 강의 담기 기능함수
    void put_bag();//3번 수강신청확인 기능합수
    void print(int g);//1번 장바구니 기능 함수, 강의 목록을 배열로 받아서 출력
};

void Cart::bag_course() {
    //for (int g; g < 3; g++) {
    cout << "추가할 학수 번호 >> ";
    string a, a1, a2 = 0;
    cin >> a;
    if (a1 != a && a2 != a && a == "0001") {
        list[1][2] = "c++프로그래밍";
    }
    else if (a1 != a && a2 != a && a == "0002") {
        list[2][2] = "linux 프로그래밍";
    }
    else if (a1 != a && a2 != a && a == "0003") {
        list[3][2] = "리버싱";
    }
    else if (a1 == a && a2 == a) {
        cout << "이미 MY 장바구니에 담겨져 있습니다." << endl;

    }
    else {
        cout << endl;
    }
    a1 = a;
    a2 = a1;

}

void Cart::put_bag() {
    for (int g = 0; g < 3; g++) {
        cout << list[g][1] << list[g][2] << endl;
    }

}
void Cart::print(int g) {
    string* printt1 = new string[3];
    delete[] printt1;
    printt1[0] = "[1]c++프로그래밍 >> 0001";
    printt1[1] = "[2]linux 프로그래밍 >> 0002";
    printt1[2] = "[3]리버싱 >> 0003";
    cout << printt1[g];
}


int main() {
    int start;
    int i = 0;
    string Name;
    string Id;
    string Password;
    Member Member1;
    Member* p = &Member1;

    string* N = new string;
    string* I = new string;
    string* P = new string;

    while (1) {
        cout << "---------------- 서울여자대학교 종합정보시스템 ----------------" << endl;
        cout << "1. 회원가입\n" << "2. 로그인\n\n" << "번호를 입력하세요 >> ";
        cin >> start;
        cout << "---------------------------------------------------------------" << endl;
        if (start == 1) {


            cout << "이름: ";
            cin >> Name;
            *N = p->setName(Name);
            cout << "아이디: ";
            cin >> Id;
            *I = p->setId(Id);
            cout << "비밀번호: ";
            cin >> Password;
            *P = p->setPassword(Password);
            cout << "\n=== 회원가입 성공 ===" << endl;
            ++i;

        }
        else if (start == 2) {
            cout << "아이디: ";
            cin >> Id;
            cout << "비밀번호: ";
            cin >> Password;

            while (1) {
                if (*I == Id && *P == Password) {
                    Name == *N;
                    cout << "== 로그인 성공 ==" << endl;
                    cout << Name << "님 환영합니다." << endl;
                    switch(start)
                    {
                        cout << "=================\n" << "1. 장바구니\n" << "2. 강의 담기\n" << "3. 수강신청 확인\n" << "4.로그아웃\n" << "번호를 입력하세요: ";
                        cin >> start;
                        case start == 1:
                            cout << "\n======= 강의목록 ========";
                            Cart print();
                            break;
                        case start == 2:
                            Cart bag_course();
                            break;
                        case start == 3:
                            Cart put_bag();
                            break;
                        case start == 4:
                            break;
                        default:
                            continue;
                        
                    }
                }
                else
                    cout << "아이디 혹은 비밀번호가 틀렸습니다." << endl;
            }

        }
        else {
            cout << "1 또는 2만 입력해주세요" << endl;
        }

    }
    delete N;
    delete I;
    delete P;
}

#include <iostream>
using namespace std;
int start;
string Name;
string Id;
string Password;
int i = 0;
int my=0;
//new연산자 사용, 객체 포인터 사용
class Member {
	string Name;
	string Id;
	string wd;
public:
	string getName();//Name값 리턴
	string getId();//Id값 리턴
	string getPassword();//Password값 리턴
	void setName(string name);//이름 입력받은
	void setId(string id);//아이디 입력받음
	void setPassword(string ps);//패스워드 입력받음
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
void Member::setName(string name) {
	Name= name;
	return Name;
}
void Member::setId(string id) {
	Id = id;
	return Id;
}
void Member::setPassword(string ps) {
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
	string a
	string* printt = new string[3];
	delete[] printt;
	for (int g; g < 3; g++) {
		cout << "추가할 학수 번호 >> ";
		cin >> a;
		string a1, a2 = 0;
		if (a1 != a && a2 != a && a == "0001") {
			printt[g] = Cart put_bag(0);
		}
		else if (a1 != a && a2 != a && a == "0002") {
			printt[g] = Cart put_bag(1);
		}
		else if (a1 != a && a2 != a && a == "0003") {
			printt[g] = Cart put_bag(2);
		}
		else {
			continue;
		}
		a1 = a;
		a2 = a1;
	}
}
		
void Cart::put_bag() {
	for (int g; g < 3; g++) {
		cout << g << "." << printt[g];
	}
	
}
void Cart::print(int g) {
	string* printt1 = new string[3];
	delete[] printt1;
	printt1[0] = "[1]c++프로그래밍";
	printt1[1] = "[2]linux 프로그래밍";
	printt1[2] = "[3]리버싱";
	cout << printt1[g];
}

int main() {
	for (;;) {
		cout << "---------------- 서울여자대학교 종합정보시스템 ----------------" << endl;
		cout << "1. 회원가입\n" << "2. 로그인\n\n" << "번호를 입력하세요 >> ";
		cin >> start;;
		cout << "---------------------------------------------------------------" << endl;
		if (start == 1) {
			Member* p;
			string* n = new string[5];
			delete[] n;
			string* I = new string[5];
			delete[] I;
			string* P = new string[5];
			delete[] P;
			cout << "이름: ";
			cin >> Name;
			*n =p-> Member.setName(Name);
			cout << "아이디: ";
			cin >> Id;
			*I = p->Member.setId(Id);
			cout << "비밀번호: ";
			cin >> Password;
			*P= p->Member.setPassword(Password);
			cout << "\n=== 회원가입 성공 ===" << endl;
			i = ++i;
		}
		else if (start == 2) {
			cout << "아이디: ";
			cin >> Id;
			cout << "비밀번호: ";
			cin >> Password;

			for (int k = i; k < 0; i--) {
				if (n[k] == Id && P[k] == Password) {
					Name == n[k];
					cout << "== 로그인 성공 ==" << endl;
					cout << Name << "님 환영합니다." << endl;
					while ( start != 4) {
						cout << "=================\n" << "1. 장바구니\n" << "2. 강의 담기\n" << "3. 수강신청 확인\n" << "4.로그아웃\n" << "번호를 입력하세요: ";
						cin >> start;
						if (start == 1) {
							cout << "\n======= 강의목록 ========";
							Cart print();
						}
						else if (start == 2) {
							Cart bag_course();
						}
						else if (start == 3) {
							for (int k; k < 3; k++) {
								Cart put_bag(k);
								cout << "<< 000" << k + 1<< endl;
							}
							
						}
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
}

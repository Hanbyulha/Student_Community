#include <iostream>
using namespace std;
int start;
string name;
string id;
string wd;
int main() {
	cout << "---------------- 서울여자대학교 종합정보시스템 ----------------" << endl;
	cout << "1. 회원가입\n" << "2. 로그인\n\n" << "번호를 입력하세요 >> ";
	cin >> start;;
	cout << "---------------------------------------------------------------" << endl;
	if (start == 1) {
		cout << "이름: ";
		cin >> name;
		cout << "아이디: ";
		cin >> id;
		cout << "비밀번호: ";
		cin >> wd;
		cout << "\n=== 회원가입 성공 ===" << endl;

	}
}
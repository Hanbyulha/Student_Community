#include <iostream>
using namespace std;
int main() {
	int a,b, c, k, i,d;
	int sit[3][10] = { };//비워두면 초기화됨
	for (;;) {
		cout << "좌석 예약하시겠습니까? (0또는 1선택) ";//벗어날수있게 수정
		cin >> a;//좌석 예약 여부 입력값으로 구분
		cout << endl;
	
		if (a == 1) {
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-------------------------------" << endl;
			for (k = 0; k < 3; k++) {// 모든 좌석 출력
				for (i = 0; i < 10; i++) {
					cout << sit[k][i] << " ";
				}
				cout << endl;
			}
			cout << "몇행, 몇열 좌석을 예약하시겠습니까? ";// 어느 좌석을 예약할지 입력받음
			cin >> b >> c;
			if (sit[b-1][c-1] == 0) {//사용자가 입력하는 대로 저장되게 수정
				sit[b-1][c-1] = 1;//예약이 되면 예약된 표시 생성
			}
			else {
				cout << "이미 예약된 자리입니다." << endl;// 예약된 자리일때 예약되었다고 출력
				continue;
			}
			
		}
		else {
			cout << "좌석 예약 종료";
			break;
		}
	}		
}

#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int n;
	int a;// 사용자가 정한 특정 배수
	srand(time(NULL)); //숫자가 랜덤으로 나오게 만들어줌
	int r = rand() % 100; //100미만으로 제한을 걸어줌
	cout << "랜덤한 수: " << r << endl;
	cout << "특정 배수 개수: ";
	cin >> n; //몇개를 입력받을지 직접 결정
	cout << "<특정 배수만 출력하는 프로그램>" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << "번째 특정 배수: ";
		cin >> a;//특정 배수값 입력받음
		cout << "<특정 배수만 출력하는 프로그램>" << endl;
		for (int k = 1; k <= r; k++)//특정 배수만 출력
		{
			if (k % a == 0)
				cout << k << ", ";
			else
				continue;
		}
		cout << endl;
		cout << "<특정 배수 제외 출력하는 프로그램>" << endl;
		for (int x = 1; x <= r; x++)// 특정 배수 제외 출력
		{
			if (x % a == 0)
				continue;
			else
				cout << x << ", ";
		}
		cout << endl;
	}
}

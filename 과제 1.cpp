#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n;
	int a;// ����ڰ� ���� Ư�� ���
	int r = rand();
	cout << "������ ��: " << r << endl;
	cout << "Ư�� ��� ����: ";
	cin >> n; //��� �Է¹����� ���� ����
	cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << "��° Ư�� ���: ";
		cin >> a;//Ư�� ����� �Է¹���
		cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
		for (int k = 1; k <= r; k++)//Ư�� ����� ���
		{
			if (k % a == 0)
				cout << k << ", ";
			else
				continue;
		}
		cout << endl;
		cout << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
		for (int x = 1; x <= r; x++)// Ư�� ��� ���� ���
		{
			if (x % a == 0)
				continue;
			else
				cout << x << ", ";
		}
		cout << endl;
	}
}
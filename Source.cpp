// Lab_02.cpp
// < ������� ��������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 19
#include <iostream>
using namespace std;
int main()
{
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	//double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	z1 = pow(((1 + a + pow(a, 2)) / a * 2 + a) + 2 - (1 - a + pow(a, 2)) / a * 2 - pow(a, 2),-1)*(5 - pow(2 * a, 2));
	//z2 = (4- pow(a,2))/2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
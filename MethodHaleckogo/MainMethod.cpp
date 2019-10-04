#include <iostream>
#include "MakeMatrix.h"

using namespace std;

int main()
{
	setlocale(0, "");

	unsigned n = 0;
	cout << "������� ������� - ";
	cin >> n;

	//�������� ������ � ������� ������� == helec � ������ MakeMatrix.h
	halec A = memoMatrix(n), // �� ��. � ��������� ��. � � �
		B = memoMatrix(n), T = memoMatrix(n),
		C = memoMatrix(n, 0), // �� ��. � � � ��������� ��. Y
		Y = memoMatrix(n, 0), // �� ��. Y � T ��������� ��. X
		X = memoMatrix(n, 0); // ���������
	 
	A = initMatrix(A, 0);
	C = initMatrix(C, 0);
	outMatrix(A);
	outMatrix(C);

	system("pause");
}
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
	halecki A = memoMatrix(n), // �� ��. � ��������� ��. � � �
		C = memoMatrix(n, 'C');// �� ��. � � � ��������� ��. Y
		// �� ��. Y � T ��������� ��. X
		// ���������

	 
	A = initMatrix(A, 0);
	C = initMatrix(C, 0);
	outMatrix(A);
	outMatrix(C);

	system("pause");
}